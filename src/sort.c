#include <libft.h>
#include <push_swap.h>

void	push_init(t_chain **chain_a, t_chain **chain_b)
{
	int	chain_size;
	int	pushes;
	int	i;

	chain_size = get_chain_size(*chain_a);
	pushes = 0;
	i = 0;
	while (chain_size > 6 && i < chain_size && pushes < chain_size / 2)
	{
		if ((*chain_a)->index <= chain_size / 2)
		{
			pb(chain_a, chain_b);
			pushes++;
		}
		else
			ra(chain_a);
		i++;
	}
	while (chain_size - pushes > 3)
	{
		pb(chain_a, chain_b);
		pushes++;
	}
}

void	sort_chain(t_chain **chain_a)
{
	int	lowest_p;
	int	chain_size;

	chain_size = get_chain_size(*chain_a);
	lowest_p = position_lowest_index(chain_a);
	if (lowest_p > chain_size / 2)
	{
		while (lowest_p < chain_size)
		{
			rra(chain_a);
			lowest_p++;
		}
	}
	else
	{
		while (lowest_p > 0)
		{
			ra(chain_a);
			lowest_p--;
		}
	}
}

void	sort(t_chain **chain_a, t_chain **chain_b)
{
	push_init(chain_a, chain_b);
	sort_three(chain_a);
	while (*chain_b)
	{
		get_target_position(chain_a, chain_b);
		cost(chain_a, chain_b);
		cheapest_move(chain_a, chain_b);
	}
	if (!is_sorted(*chain_a))
		sort_chain(chain_a);
}
