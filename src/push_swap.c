/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/12/02 22:28:01 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_list	list;

	list.moves = 0;
	list.num_a = NULL;
	list.num_b = NULL;
	list.size_a = 0;
	list.size_b = 0;
	list.capacity = 0;
	if (argc < 2)
		return (ft_printf("Error: not enough arguments!\n"), 1);
	if (!check_argv(argc, argv, &list))
	{
		free_memory(&list, argc);
		return (1);
	}
	// for(int i = 0; i < list.size_a; i++)
	// {
	// 	ft_printf("Each befor number: %d\n", list.a[i]);
	// }

	

	// sort_stack(&list);
	
	if (list.capacity < 6)
		ft_sort_small(&list);
		
	ft_printf("Number A  after: ");
	for(int i = 0; i < list.capacity; i++)
	{
		ft_printf("%d,", list.num_a[i].num_int);
	}
	ft_printf("\n");
	ft_printf("Number B  after: ");
	for(int i = 0; i < list.capacity; i++)
	{
		ft_printf("%d,", list.num_b[i].num_int);
	}
	ft_printf("\n");
	ft_printf("count: %d, %d\n", list.moves, list.capacity);

	// for(int i = 0; i < list.capacity; i++)
	// {
	// 	ft_printf("Number B after: %d\n", list.b[i]);
	// }
	// ft_printf("size A: %d, size B : %d\n", list.size_a, list.size_b);
	free_memory(&list, argc);

	return (0);
}
