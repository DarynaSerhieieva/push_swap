/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/07 20:18:46 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdbool.h>

typedef struct s_list
{
	char	**list_a;
	int		*a;
	int		*b;
	int		size;
	int		start_index;
}	t_list;

// push_swap
int		push_swap(int x);

//utils
int		list_size(char **list);
void	free_memory(t_list *list);

//list_validation
int		fill_list_a(int *a, char **list, int start_index);
int		check_dublicat(int *a, int size);
int		check_argv(int argc, char **argv, t_list *list);
int		ft_atoi_custom(const char *nptr, int *array, int index);

//list_manipulation
void	ft_swap(int *list, int size);
#endif
