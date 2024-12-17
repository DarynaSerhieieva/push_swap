#include <libft.h>
#include "push_swap.h"

int	get_chain_size(t_chain	*chain)
{
	int	size;

	size = 0;
	if (!chain)
		return (0);
	while (chain)
	{
		chain = chain->next;
		size++;
	}
	return (size);
}

t_chain	*new_ring(int value)
{
	t_chain	*new;

	new = malloc(sizeof(t_chain));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

t_chain	*get_bottom(t_chain *chain)
{
	while (chain && chain->next != NULL)
		chain = chain->next;
	return (chain);
}

t_chain	*before_bottom(t_chain *chain)
{
	while (chain && chain->next->next != NULL)
		chain = chain->next;
	return (chain);
}

void	add_ring(t_chain **chain, t_chain *new)
{
	t_chain	*bottom;

	if (!new)
		return ;
	if (!*chain)
	{
		*chain = new;
		return ;
	}
	bottom = get_bottom(*chain);
	bottom->next = new;
}
