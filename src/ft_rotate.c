#include <libft.h>
#include <push_swap.h>

void	ft_rotate(t_chain **chain)
{
	t_chain	*tmp;
	t_chain	*tail;

	tmp = *chain;
	*chain = (*chain)->next;
	tail = get_bottom(*chain);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ra(t_chain **chain_a)
{
	ft_rotate(chain_a);
	ft_printf("ra\n");
}

void	rb(t_chain **chain_b)
{
	ft_rotate(chain_b);
	ft_printf("rb\n");
}

void	rr(t_chain **chain_a, t_chain **chain_b)
{
	ft_rotate(chain_a);
	ft_rotate(chain_b);
	ft_printf("rr\n");
}
