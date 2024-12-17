/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:11 by dserhiei          #+#    #+#             */
/*   Updated: 2024/12/17 18:58:48 by dserhiei         ###   ########.fr       */
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
void	list_validation(int size, char **array, t_chain *chain_a);
void	get_numbers(char *array, t_chain **chain_a);
int		check_dublicat(t_chain *column);
int		is_num(char	*str);

//ring_operations
void	add_ring(t_chain **chain, t_chain *new);
t_chain	*before_bottom(t_chain *chain);
t_chain	*get_bottom(t_chain *chain);
t_chain	*new_ring(int value);
int		get_chain_size(t_chain	*chain);


//utils
void	error_exit(t_chain **chain_a, t_chain **chain_b, char message);
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

#endif
