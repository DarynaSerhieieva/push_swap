#include <libft.h>
#include <push_swap.h>

int	is_sorted(t_chain *chain)
{
	while (chain->next != NULL)
	{
		if (chain->value > chain->next->value)
			return (0);
		chain = chain->next;
	}
	return (1);
}

void	get_index(t_chain *chain_a, int size)
{
	t_chain	*ptr;
	t_chain	*biggest;
	int		value;

	while (--size > 0)
	{
		ptr = chain_a;
		biggest = NULL;
		value = INT_MIN;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				biggest = ptr;
				ptr = ptr->next;
			}
			else
				ptr = ptr->next;
		}
		if (biggest != NULL)
			biggest->index = size;
	}
}

int	ft_atoi_custom(const char *nptr)
{
	long int	num;
	int			sign;
	int			i;

	i = 0;
	num = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

void	free_memory(t_chain **chain)
{
	t_chain	*tmp;

	if (!chain || !(*chain))
		return ;
	while (*chain)
	{
		tmp = (*chain)->next;
		free(*chain);
		*chain = tmp;
	}
	*chain = NULL;
}

void	error_exit(t_chain **chain_a, t_chain **chain_b, char *message)
{
	if (chain_a == NULL || *chain_a != NULL)
		free_memory(chain_a);
	if (chain_b == NULL || *chain_b != NULL)
		free_memory(chain_b);
	ft_printf("ERROR: %s\n", message);
	exit(1);
}
