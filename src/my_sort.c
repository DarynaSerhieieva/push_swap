#include <libft.h>
#include <push_swap.h>




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

void	check_a(t_list *list, int size)
{
	int	num_last;

	if (list->size_a < 2)
		return ;
	num_last = list->num_a[list->size_a - 1].index;
	if (list->num_a[0].index < list->num_a[1].index && \
	list->num_a[0].index > num_last && num_last <= size / 2)
		ra(list);
	num_last = list->num_a[list->size_a - 1].index;
	if (list->num_a[0].index > list->num_a[1].index)
		sa(list);
	if (list->num_a[0].index > num_last && num_last <= size / 2)
		rra(list);
}

void	check_b(t_list *list)
{
	int	num_last;

	if (list->size_b < 2)
		return ;
	num_last = list->num_b[list->size_b - 1].index;
	if (list->num_b[0].index > list->num_b[1].index && \
	list->num_b[0].index < num_last)
		rb(list);
	num_last = list->num_b[list->size_b - 1].index;
	if (list->num_b[0].index < list->num_b[1].index)
		sb(list);
	if (list->num_b[0].index < num_last)
		rrb(list);
}

void	check_a_b(t_list *list, int size)
{
	int	num_a_last;
	int	num_b_last;

	if (list->size_a < 2 || list->size_b)
		return ;
	num_a_last = list->num_a[list->size_a - 1].index;
	num_b_last = list->num_b[list->size_b - 1].index;
	if (list->num_a[0].index < list->num_a[1].index && \
	list->num_a[0].index > num_a_last && num_a_last <= size / 2 && \
	list->num_b[0].index > list->num_b[1].index && \
	list->num_b[0].index < num_b_last)
		rr(list);
	num_a_last = list->num_a[list->size_a - 1].index;
	num_b_last = list->num_b[list->size_b - 1].index;
	if (list->num_a[0].index > list->num_a[1].index && \
	list->num_b[0].index < list->num_b[1].index)
		ss(list);
	if (list->num_a[0].index > num_a_last && num_a_last <= size / 2 && \
	list->num_b[0].index < num_b_last)
		rrr(list);
}

void	my_sort(t_list *list, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		check_a(list, size);
		check_b(list);
		check_a_b(list, size);

		if (list->num_a[0].index <= size / 2)
			pb(list);
		else
			ra(list);
		i++;
	}
	while (list->size_b > 0)
	{
		check_a(list, size);
		check_b(list);
		check_a_b(list, size);
		pa(list);
	}
	check_a(list, size);
}



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
// 	int	pos;

// 	index = 0;
// 	while (index < list->capacity)
// 	{
// 		pos = get_position(list->num_a, list->size_a, index);

// 		if (pos == 1)
// 			sa(list);
// 		else if (pos == list->capacity - 1)
// 			rra(list);
// 		else if (pos < list->size_a / 2)
// 		{
// 			while (list->num_a[0].index != index)
// 				ra(list);
// 		}
// 		else
// 		{
// 			while (list->num_a[0].index != index)
// 				rra(list);
// 		}
// 		pb(list);
// 		index++;
// 	}
// 	while (list->size_b > 0)
// 		pa(list);
// }



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
