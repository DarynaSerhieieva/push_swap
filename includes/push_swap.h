/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/12/02 23:24:02 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_data
{
	int		num_int;
	char	*num_char;
	bool	negative;
	int		size;
}	t_data;

typedef struct s_list
{
	char	**list_a;
	t_data	*num_a;
	t_data	*num_b;
	int		capacity;
	int		size_a;
	int		size_b;
	int		moves;
}	t_list;

// push_swap
int		push_swap(int x);

//utils
int		list_size(char **list);
void	free_memory(t_list *list, int argc);

//list_validation
int		fill_list_a(t_list *list, int start_index);
int		check_dublicat(t_data *arrey, int size);
int		check_argv(int argc, char **argv, t_list *list);
int		ft_atoi_custom(char *nptr, int *num);

//sort
void	sort_a_b(t_list *list);
void	sort_a(t_list *list);
void	sort_b(t_list *list);
//
void	ft_sort_small(t_list *list);

//swap
void	ft_swap(t_data *x, t_data *y, int size);
void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *list);

//push
void	ft_push(t_data **dest, t_data **list, int *dest_size, int *list_size);
void	pa(t_list *list);
void	pb(t_list *list);

//rotate
void	ft_rotate(t_data *arrey, int size);
void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *list);

//reverse_rotate
void	ft_reverse_rotate(t_data *arrey, int size);
void	rra(t_list *list);
void	rrb(t_list *list);
void	rrr(t_list *list);

//fil data
int		fill_data(t_data **arrey_a, t_data **arrey_b, int capacity);

#endif
