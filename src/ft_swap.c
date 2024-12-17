#include <libft.h>
#include <push_swap.h>

void	ft_swap(t_chain **chain)
{
	t_chain	*tmp;

	if (!*chain || (*chain)->next == NULL)
		return ;
	tmp = *chain;
	*chain = (*chain)->next;
	tmp->next = (*chain)->next;
	(*chain)->next = tmp;
}

void	sa(t_chain **chain_a)
{
	ft_swap(chain_a);
	ft_printf("sa\n");
}

void	sb(t_chain **chain_b)
{
	ft_swap(chain_b);
	ft_printf("sb\n");
}

void	ss(t_chain **chain_a, t_chain **chain_b)
{
	ft_swap(chain_a);
	ft_swap(chain_b);
	ft_printf("ss\n");
}
