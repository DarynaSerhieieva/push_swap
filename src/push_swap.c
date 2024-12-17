/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:14:54 by dserhiei          #+#    #+#             */
/*   Updated: 2024/12/17 18:37:14 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

void	push_swap(t_chain **chain_a, t_chain **chain_b, int size)
{
	if (size == 2)
		do_sa(chain_a);
	else if (size == 3)
		sort_three(chain_a);
	else if (size > 3)
		sort(chain_a, chain_b);
}


int	main(int argc, char **argv)
{
	t_chain	*chain_a;
	t_chain	*chain_b;
	int		chain_size;

	chain_a = NULL;
	chain_b = NULL;
	if (argc < 2)
		error_exit(NULL, NULL, "argv is empty!");
	list_validation(argc, argv, chain_a);
	chain_size = get_stack_size(chain_a);
	get_index(chain_a, chain_size + 1);
	if (!is_sorted(chain_a))
		push_swap(&chain_a, &chain_b, chain_size);
	free_memory(&chain_a);
	free_memory(&chain_b);
	return (0);
}
