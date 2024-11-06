/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/06 16:09:48 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

// int	check_argv(int size, char **argv)
// {

// }

int	main(int argc, char **argv)
{
	char	**list_a;
	int		*a;
	int		size;
	int		start_index;
	// char **b;
	a = NULL;
	size = 0;
	start_index = 0;
	if (argc < 2)
		return (ft_printf("Error: not enough arguments!\n"), 1);
	if (argc == 2)
	{
		list_a = ft_split(argv[1], ' ');
		if (!list_a)
			return (ft_printf("Error: can not split the line!\n"), 1);
		size = list_size(list_a);
	}
	else
	{
		size = argc - 1;
		list_a = argv;
		start_index = 1;
	}
	if (size < 1)
		return (ft_printf("Error: size is not valid!\n"), 1);
	a = (int *)malloc((size + 1) * sizeof(int));
	if (!a)
		return (ft_printf("Error: memory allocation error!\n"), 0);
	if (!creat_a_list(a, list_a, start_index))
		return (1);
	if (!check_dublicat(a, size))
		return (1);
	return (0);
}
