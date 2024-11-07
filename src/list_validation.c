#include <libft.h>
#include <push_swap.h>
#include <limits.h>

int	ft_atoi_custom(const char *nptr, int *array, int index)
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
		digit = *nptr - '0';
		if (!ft_isdigit(*nptr))
			return (ft_printf("Error: the charecter is not digit\n"), 0);
		if (sign == 1 && (array[index] > (INT_MAX - digit) / 10))
			return ((ft_printf("Error: the INT is to big\n"), 0));
		else if (sign == -1 && (array[index] > (INT_MAX - digit + 1) / 10))
			return (ft_printf("Error: the INT is to small\n"), 0);
		array[index] = array[index] * 10 + digit;
		nptr++;
	}
	array[index] *= sign;
	return (1);
}

int	fill_list_a(int *a, char **list, int start_index)
{
	int	i;
	int	j;

	i = start_index;
	j = 0;
	while (list[i])
	{
		if (!ft_atoi_custom(list[i], a, j))
			return (0);
		i++;
		j++;
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

int	check_argv(int argc, char **argv, t_list *list)
{
	if (argc == 2)
	{
		list->list_a = ft_split(argv[1], ' ');
		if (!list->list_a)
			return (ft_printf("Error: can not split the line!\n"), 0);
		list->capacity = list_size(list->list_a);
	}
	else
	{
		list->capacity = argc - 1;
		list->list_a = argv;
		list->start_index = 1;
	}
	if (list->capacity < 1)
		return (ft_printf("Error: size is not valid!\n"), 0);
	list->size_a = list->capacity;
	ft_printf("size_a: %d, capacity: %d\n", list->size_a, list->capacity);
	list->a = (int *)malloc(list->capacity * sizeof(int));
	if (!list->a)
		return (ft_printf("Error: memory allocation error!\n"), 0);
	list->b = (int *)malloc(list->capacity * sizeof(int));
	if (!list->b)
		return (ft_printf("Error: memory allocation error!\n"), 0);
	if (!fill_list_a(list->a, list->list_a, list->start_index))
		return (0);
	if (!check_dublicat(list->a, list->size_a))
		return (0);
	return (1);
}
