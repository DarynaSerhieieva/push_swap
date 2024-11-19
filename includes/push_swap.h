/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/11/19 18:00:35 by dserhiei         ###   ########.fr       */
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
	int		capacity;
	int		size_a;
	int		size_b;
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

//sort
void	ft_sort(t_list *list);

//swap
void	ft_swap(int *list, int size);
void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *list);

//push
void	ft_push(int *dest, int *list, int *dest_size, int *list_size);
void	pa(t_list *list);
void	pb(t_list *list);

//rotate
void	ft_rotate(int *list, int list_size);
void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *list);

//reverse_rotate
void	ft_reverse_rotate(int *list, int list_size);
void	rra(t_list *list);
void	rrb(t_list *list);
void	rrr(t_list *list);

#endif
