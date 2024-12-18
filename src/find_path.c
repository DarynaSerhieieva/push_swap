#include <libft.h>
#include <push_swap.h>

int	position_lowest_index(t_chain **chain)
{
	t_chain	*tmp;
	int		lowest_i;
	int		lowest_p;

	tmp = *chain;
	lowest_i = INT_MAX;
	get_position(chain);
	lowest_p = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_i)
		{
			lowest_i = tmp->index;
			lowest_p = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_p);
}

int	get_target(t_chain **chain_a, int index_b, int target_i, int target)
{
	t_chain	*tmp;

	tmp = *chain_a;
	while (tmp)
	{
		if (tmp->index > index_b && tmp->index < target_i)
		{
			target_i = tmp->index;
			target = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (target_i != INT_MAX)
		return (target);
	tmp = *chain_a;
	while (tmp)
	{
		if (tmp->index < target_i)
		{
			target_i = tmp->index;
			target = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (target);
}

void	get_position(t_chain **chain)
{
	t_chain		*tmp;
	int			i;

	tmp = *chain;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

void	get_target_position(t_chain **chain_a, t_chain **chain_b)
{
	t_chain	*tmp;
	int		target;

	tmp = *chain_b;
	get_position(chain_a);
	get_position(chain_b);
	target = 0;
	while (tmp)
	{
		target = get_target(chain_a, tmp->index, INT_MAX, target);
		tmp->target = target;
		tmp = tmp->next;
	}
}
