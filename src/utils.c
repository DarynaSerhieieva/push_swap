#include <libft.h>
#include <push_swap.h>

int	ft_atoi_custom(char *nptr, int *num)
{
	int	sign;
	int	digit;

	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != '\0')
	{
		if (!ft_isdigit(*nptr))
			return (ft_printf("Error: the charecter is not digit\n"), 0);
		digit = *nptr - '0';
		if ((sign == 1 && (*num > (INT_MAX - digit) / 10)) || \
			(sign == -1 && digit == 0 && (*num > INT_MAX / 10)) || \
			(sign == -1 && digit != 0 && *num > (INT_MAX - digit + 1) / 10))
			return ((ft_printf("Error: the INT is to big or to small\n"), 0));
		*num = *num * 10 + digit;
		nptr++;
	}
	*num *= sign;
	return (1);
}

int	list_size(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

void	free_memory(t_list *list, int argc)
{
	if (argc == 2 && list->list_a)
		ft_free_matrix((void **)list->list_a, list->capacity);
	if (list->num_a)
	{
		free(list->num_a);
		list->num_a = NULL;
	}
	if (list->num_b)
	{
		free(list->num_b);
		list->num_b = NULL;
	}
}
