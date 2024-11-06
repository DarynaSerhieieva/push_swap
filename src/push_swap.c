/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/06 18:29:20 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

int	check_argv(int argc, char **argv, t_list *list)
{
	if (argc == 2)
	{
		list->list_a = ft_split(argv[1], ' ');
		if (!list->list_a)
			return (ft_printf("Error: can not split the line!\n"), 0);
		list->size = list_size(list->list_a);
	}
	else
	{
		list->size = argc - 1;
		list->list_a = argv;
		list->start_index = 1;
	}
	if (list->size < 1)
		return (ft_printf("Error: size is not valid!\n"), 0);
	list->a = (int *)malloc((list->size + 1) * sizeof(int));
	if (!list->a)
		return (ft_printf("Error: memory allocation error!\n"), 0);
	if (!fill_list_a(list->a, list->list_a, list->start_index))
		return (0);
	if (!check_dublicat(list->a, list->size))
		return (0);
	return (1);

}

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
	free_memory(&list);
	return (0);
}
