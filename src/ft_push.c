#include <libft.h>
#include <push_swap.h>

void	ft_push(t_chain **src, t_chain **dst)
{
	t_chain	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	do_pa(t_chain **chain_a, t_chain **chain_b)
{
	ft_push(chain_b, chain_a);
	ft_putstr("pa\n");
}

void	do_pb(t_chain **chain_a, t_chain **chain_b)
{
	ft_push(chain_a, chain_b);
	ft_putstr("pb\n");
}

