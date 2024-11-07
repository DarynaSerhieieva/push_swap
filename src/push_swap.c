/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/07 18:11:25 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_list	list;

	list.a = NULL;
	list.size = 0;
	list.start_index = 0;
	if (argc < 2)
		return (ft_printf("Error: not enough arguments!\n"), 1);
	if (!check_argv(argc, argv, &list))
	{
		free_memory(&list);
		return (1);
	}
	for(int i = 0; i < list.size; i++)
	{
		ft_printf("Each befor number: %d\n", list.a[i]);
	}
	free_memory(&list);

	return (0);
}

// for(int i = 0; i < list.size; i++)
// {
// 	ft_printf("Each befor number: %d\n", list.a[i]);
// }
