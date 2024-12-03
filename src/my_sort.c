#include <libft.h>
#include <push_swap.h>



// int	get_position(t_data *stack, int size, int target_index)
// {
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		if (stack[i].index == target_index)
// 			return (i);
// 		i++;
// 	}
// 	return (-1);
// }

// void	my_sort(t_list *list)
// {
// 	int	index;

// 	index = 0;

// 	while (index < list->capacity)
// 	{
// 		if (list->num_a[0].index > list->num_a[1].index)
// 			sa(list);
// 		if (list->num_a[0].index > list->num_a[list->capacity - 1].index && 
// 		list->num_a[list->capacity - 1].index < list->capacity / 2)
// 			rra(list);
// 		if (list->num_a[0].index < list->capacity / 2)
// 			pb(list);
// 		else
// 			ra(list);
// 		index++;
// 	}
// 	while (list->size_b > 0)
// 		pa(list);
// }





int	get_position(t_data *stack, int size, int target_index)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i].index == target_index)
			return (i);
		i++;
	}
	return (-1);
}

void	my_sort(t_list *list)
{
	int	index;
	int	pos;

	index = 0;
	while (index < list->capacity)
	{
		pos = get_position(list->num_a, list->size_a, index);

		if (pos == 1)
			sa(list);
		else if (pos == list->capacity - 1)
			rra(list);
		else if (pos < list->size_a / 2)
		{
			while (list->num_a[0].index != index)
				ra(list);
		}
		else
		{
			while (list->num_a[0].index != index)
				rra(list);
		}
		pb(list);
		index++;
	}
	while (list->size_b > 0)
		pa(list);
}



// void	my_sort(t_list *list)
// {
// 	int	index;

// 	index = 0;
// 	while (index < list->capacity)
// 	{
// 		if (index == list->num_a[1].index)
// 			sa(list);
// 		if (index == list->num_a[list->size_a - 1].index)
// 			rra(list);
// 		if (index == list->num_a[0].index)
// 		{
// 			pb(list);
// 			index++;
// 		}
// 		else
// 			ra(list);
// 	}
// 	while (list->size_b != 0)
// 	{
// 		pa(list);
// 	}
// }
