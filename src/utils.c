#include <libft.h>
#include <push_swap.h>

int	list_size(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

int	creat_a_list(int *a, char **list, int start_index)
{
	int	i;
	int	j;

	i = start_index;
	j = 0;
	while (list[i])
	{
		j = 0;
		while (list[i][j])
		{
			if (j == 0 && (list[i][j] == '+' || list[i][j] == '-'))
				j++;
			else if (ft_isdigit(list[i][j]))
				j++;
			else
				return (ft_printf("A charecter is not a number\n"), 0);
		}
		*a = ft_atoi(list[i]);
		i++;
		a++;
	}
	return (1);
}

int	check_dublicat(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (i != j && a[i] == a[j])
				return (ft_printf("Error: a list has a dublicat\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}
