#include <libft.h>
#include <push_swap.h>

int	biggest_index(t_chain *chain)
{
	int	index;

	index = chain->index;
	while (chain)
	{
		if (chain->index > index)
			index = chain->index;
		chain = chain->next;
	}
	return (index);
}

void	sort_three(t_chain **chain)
{
	int	biggest;

	biggest = biggest_index(*chain);
	if ((*chain)->index == biggest)
		ra(chain);
	else if ((*chain)->next->index == biggest)
		rra(chain);
	if ((*chain)->index > (*chain)->next->index)
		sa(chain);
}
