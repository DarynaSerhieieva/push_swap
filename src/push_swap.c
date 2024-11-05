/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/05 18:25:42 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int	check_num_list(int *a, char **list, bool status)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	if (status)
		list+;
	while(*list)
	{
		while 
		num = *list - '0';
		if ( num >= -2147483648 || num <= 2147483647)
			a[i] = num;
		else
			return (ft_printf("Error: it is not a number\n"), 0);
	}

}

int	main(int argc, char **argv)
{
	char **list_a;
	int *a;
	int	size;
	bool	status;
	// char **b;
	a = NULL;
	size = 0;
	status  = true;
	if (argc < 2)
		return (ft_printf("Error: not enough arguments!\n"), 1);
	if (argc == 2)
	{
		list_a = ft_split(argv[1], ' ');
		if (!list_a)
			return (ft_printf("Error: can not split the line!\n"), 1);
		size = list_size(list_a);
		status = fals;
	}
	else
	{
		size = argc - 1;
		list_a = argv;
	}
	if (size < 1)
		return (ft_printf("Error: size is not valid!\n"), 1);
	a = (int *)malloc(size * sizeof(int));
		if (!a)
			return (ft_printf("Memory allocation error!\n"), 0);
	
	if (!check_num_list(a, list_a, status))
		return (1);

	return (0);
}
