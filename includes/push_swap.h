/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/12/18 17:42:22 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdbool.h>

typedef struct s_chain
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_chain	*next;
}	t_chain;

//push_swap
void	push_swap(t_chain **chain_a, t_chain **chain_b, int size);

//list_validation
void	list_validation(int size, char **array, t_chain **chain_a);
void	get_numbers(char *array, t_chain **chain_a);
int		check_dublicat(t_chain *column);
int		is_num(char	*str);

//ring_operations
void	add_ring(t_chain **chain, t_chain *new);
t_chain	*before_bottom(t_chain *chain);
t_chain	*get_bottom(t_chain *chain);
t_chain	*new_ring(int value);
int		get_chain_size(t_chain	*chain);

//sort_three
void	sort_three(t_chain **chain);
int		biggest_index(t_chain *chain);

//sort
void	sort(t_chain **chain_a, t_chain **chain_b);
void	sort_chain(t_chain **chain_a);
void	push_init(t_chain **chain_a, t_chain **chain_b);

//find_path
void	get_target_position(t_chain **chain_a, t_chain **chain_b);
void	get_position(t_chain **chain);
int		get_target(t_chain **chain_a, int index_b, int target_i, int target);
int		position_lowest_index(t_chain **chain);

//cost_of_move
void	cheapest_move(t_chain **chain_a, t_chain **chain_b);
void	cost(t_chain **chain_a, t_chain **chain_b);

//move
void	move(t_chain **a, t_chain **b, int cost_a, int cost_b);
void	rotate_b(t_chain **b, int *cost);
void	rotate_a(t_chain **a, int *cost);
void	rotate_both(t_chain **a, t_chain **b, int *cost_a, int *cost_b);
void	reverse_both(t_chain **a, t_chain **b, int *cost_a, int *cost_b);

//utils
void	error_exit(t_chain **chain_a, t_chain **chain_b, char *message);
void	free_memory(t_chain **chain);
void	get_index(t_chain *chain_a, int size);
int		ft_atoi_custom(const char *nptr);
int		is_sorted(t_chain *chain);

//ft_swap
void	ft_swap(t_chain **chain);
void	sa(t_chain **chain_a);
void	sb(t_chain **chain_b);
void	ss(t_chain **chain_a, t_chain **chain_b);

//ft_rotate
void	ft_rotate(t_chain **chain);
void	ra(t_chain **chain_a);
void	rb(t_chain **chain_b);
void	rr(t_chain **chain_a, t_chain **chain_b);

//ft_reverse_rotate
void	ft_reverse_rotate(t_chain **chain);
void	rra(t_chain **chain_a);
void	rrb(t_chain **chain_b);
void	rrr(t_chain **chain_a, t_chain **chain_b);

//ft_push
void	ft_push(t_chain **src, t_chain **dst);
void	pa(t_chain **chain_a, t_chain **chain_b);
void	pb(t_chain **chain_a, t_chain **chain_b);

#endif
