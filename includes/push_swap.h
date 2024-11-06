/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/06 18:28:17 by dserhiei         ###   ########.fr       */
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
int		fill_list_a(int *a, char **list, int start_index);
int		check_dublicat(int *a, int size);
void	free_memory(t_list *list);


#endif
