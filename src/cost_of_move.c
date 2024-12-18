#include <libft.h>
#include <push_swap.h>

void	cost(t_chain **chain_a, t_chain **chain_b)
{
	t_chain	*tmp_a;
	t_chain	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *chain_a;
	tmp_b = *chain_b;
	size_a = get_chain_size(tmp_a);
	size_b = get_chain_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target;
		if (tmp_b->target > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target) * -1;
		tmp_b = tmp_b->next;
	}
}

void	cheapest_move(t_chain **chain_a, t_chain **chain_b)
{
	t_chain		*tmp;
	int			cheapest;
	int			cost_a;
	int			cost_b;

	tmp = *chain_b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (abs(tmp->cost_a) + abs(tmp->cost_b) < cheapest)
		{
			cheapest = abs(tmp->cost_a) + abs(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	move(chain_a, chain_b, cost_a, cost_b);
}
