#include <libft.h>
#include <push_swap.h>

void	ft_reverse_rotate(t_chain **chain)
{
	t_chain	*tmp;
	t_chain	*tail;
	t_chain	*new_tail;

	tail = get_bottom(*chain);
	new_tail = before_bottom(*chain);
	tmp = *chain;
	*chain = tail;
	(*chain)->next = tmp;
	new_tail->next = NULL;
}

void	rra(t_chain **chain_a)
{
	ft_reverse_rotate(chain_a);
	ft_printf("rra\n");
}

void	rrb(t_chain **chain_b)
{
	ft_reverse_rotate(chain_b);
	ft_printf("rrb\n");
}

void	rrr(t_chain **chain_a, t_chain **chain_b)
{
	ft_reverse_rotate(chain_a);
	ft_reverse_rotate(chain_b);
	ft_printf("rrr\n");
}
