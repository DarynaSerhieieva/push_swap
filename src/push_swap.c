/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/26 14:20:37 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_list	list;

	list.test = 0;
	list.count = 0;
	list.a = NULL;
	list.size_a = 0;
	list.size_b = 0;
	list.capacity = 0;
	list.start_index = 0;
	if (argc < 2)
		return (ft_printf("Error: not enough arguments!\n"), 1);
	if (!check_argv(argc, argv, &list))
	{
		free_memory(&list);
		return (1);
	}
	// for(int i = 0; i < list.size_a; i++)
	// {
	// 	ft_printf("Each befor number: %d\n", list.a[i]);
	// }

	// ft_sort(&list);

	// sort_stack(&list);
	quicksort(&list, list.a, list.size_a, 'a');
	ft_printf("Number A  after: ");
	for(int i = 0; i < list.capacity; i++)
	{
		ft_printf("%d,", list.a[i]);
	}
	ft_printf("\n");
	ft_printf("Number B  after: ");
	for(int i = 0; i < list.capacity; i++)
	{
		ft_printf("%d,", list.b[i]);
	}
	ft_printf("\n");
	ft_printf("count: %d, %d\n", list.test, list.capacity);

	// for(int i = 0; i < list.capacity; i++)
	// {
	// 	ft_printf("Number B after: %d\n", list.b[i]);
	// }
	// ft_printf("size A: %d, size B : %d\n", list.size_a, list.size_b);
	free_memory(&list);

	return (0);
}
