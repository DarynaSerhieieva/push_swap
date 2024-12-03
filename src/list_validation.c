#include <libft.h>
#include <push_swap.h>

int	fill_list_a(t_list *list, int i)
{
	int	j;

	j = 0;
	if (!fill_data(&list->num_a, &list->num_b, list->capacity))
		return (0);
	while (list->list_a[i])
	{
		if (!ft_atoi_custom(list->list_a[i], &list->num_a[j].num_int))
			return (0);
		list->num_a[j].num_char = ft_itoa(list->num_a[j].num_int);
		if (list->num_a[j].num_int < 0)
			list->num_a[j].negative = true;
		// list->num_a[j].size = ft_strlen(list->num_a[j].num_char);
		if (list->num_a[j].negative)
			list->num_a[j].num_char--;
		// if (list->num_a[j].num_int > list->max_value)
		// 	list->max_value = list->num_a[j].num_int;
		i++;
		j++;
	}
	return (1);
}

int	check_dublicat(t_data *array, int size)
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
			if (i != j && array[i].num_int == array[j].num_int)
				return (ft_printf("Error: a list has a dublicat\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_argv(int argc, char **argv, t_list *list)
{
	int	start_index;

	start_index = 0;
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
		start_index = 1;
	}
	if (list->capacity < 1)
		return (ft_printf("Error: size is not valid!\n"), 0);
	list->size_a = list->capacity;
	if (!fill_list_a(list, start_index))
		return (0);
	if (!check_dublicat(list->num_a, list->capacity))
		return (0);
	return (1);
}
