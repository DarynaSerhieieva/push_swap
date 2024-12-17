#include <libft.h>
#include <push_swap.h>

int	check_dublicat(t_chain *column)
{
	t_chain	*tmp;
	t_chain	*tmp2;

	tmp = column;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int	is_num(char	*str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	get_numbers(char *array, t_chain **chain_a)
{
	char		**tmp;
	long int	number;
	int			i;

	tmp = ft_split(array, ' ');
	i = 0;
	while (tmp[i] != NULL)
	{
		if (is_num(tmp[i]))
		{
			number = ft_atoi_custom(tmp[i]);
			if (number > INT_MAX || number < INT_MIN)
				error_exit(chain_a, NULL, "int is too big or too small!");
			add_ring(chain_a, new_ring(number));
		}
		else
			error_exit(chain_a, NULL, "argument must contain only numbers!");
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

void	list_validation(int size, char **array, t_chain *chain_a)
{
	int		i;

	i = 1;
	while (i < size)
	{
		get_numbers(array[i], chain_a);
		i++;
	}
	if (check_dublicat(chain_a))
		error_exit(chain_a, NULL, "array has duplicate!");
}
