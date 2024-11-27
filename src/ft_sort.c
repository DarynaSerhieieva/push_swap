#include <libft.h>
#include <push_swap.h>

int	chek_lol(int *array, int low, int high)
{
	int	i;

	i = low;
	ft_printf("dfsdfdsf: %d, %d\n", low, high);
	while (i < high)
	{
		if (array[high] < array[i])
			return (1);
		i++;
	}
	return (0);
}

int	partition_b(t_list *list, int *array, int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;
	int	c;

	pivot_value = array[high];
	i = low;
	j = low;
	c = low;
	// if (!chek_lol(array, low, high))
	// 	return (high - 1);
	while (c > 0)
	{
		ra(list);
		c--;
	}
	while (j <= high)
	{
		if (array[0] <= pivot_value)
		{
			pb(list);
			i++;
		}
		else
		{
			ra(list);
			c++;
		}
		j++;
	}
	while (c > 0)
	{
		rra(list);
		c--;
	}
	while (list->size_b != 0)
		pa(list);
	while (low > 0)
	{
		rra(list);
		low--;
	}
	return (i - 1);
}

int	partition_a(t_list *list, int *array, int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;
	int	c;

	pivot_value = array[high];
	i = low;
	j = low;
	c = 0;
	// if (!chek_lol(array, low, high))
	// 	return (high - 1);
	while (j <= high)
	{
		if (array[0] <= pivot_value)
		{
			pb(list);
			i++;
		}
		else
		{
			c++;
			ra(list);
		}
		j++;
	}
	while (c > 0)
	{
		rra(list);
		c--;
	}
	while (list->size_b != 0)
		pa(list);
	return (i - 1);
}

int	partition(t_list *list, int *array, int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;

	// if (!chek_lol(array, low, high))
	// 	return (high -1);
	pivot_value = array[high];
	i = low;
	j = low;
	while (j <= high)
	{
		if (array[0] <= pivot_value)
		{
			pb(list);
			i++;
		}
		else
			ra(list);
		j++;
	}
	while (list->size_b != 0)
		pa(list);
	return (i - 1);
}

void	quicksort_recursion(t_list *list, int *array, int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		if (list->test == 0)
			pivot_index = partition(list, list->a, 0, high);
		else if (low == 0)
			pivot_index = partition_a(list, array, low, high);
		else
			pivot_index = partition_b(list, array, low, high);
		quicksort_recursion(list, array, low, pivot_index - 1);
		quicksort_recursion(list, array, pivot_index + 1, high);
	}
}

void	quicksort(t_list *list)
{
	quicksort_recursion(list, list->a, 0, list->capacity - 1);
}

/////////////////////////////////////////////////////
// void	quicksort(t_list *list, int size)
// {
// 	int	i;
// 	int	pivot;
// 	int	cout;
// 	int	j;

// 	i = 0;
// 	cout = 0;
// 	j = 0;
// 	pivot = list->a[size / 2];
// 	while (i < size)
// 	{
// 		if (list->a[0] <= pivot)
// 		{
// 			pb(list);
// 			sort_a_b(list);
// 			sort_a(list);
// 			sort_b(list);

// 		}
// 		else
// 		{
// 			ra(list);
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (size != list->capacity)
// 	{
// 		while (j > 0)
// 		{
// 			rra(list);
// 			j--;
// 		}
// 	}
// 	while (list->size_b != 0)
// 	{
// 		cout++;
// 		sort_a_b(list);
// 		sort_a(list);
// 		sort_b(list);
// 		pa(list);
// 	}
// 	ft_printf("sorted %d, %d\n", cout, pivot);
// 	// // ft_printf("Here: %d\n", list->test2);
// 	if (cout <= 2)
// 	{
		
// 		return ;
// 	}
// 	else
// 		quicksort(list, cout);
// 	// quicksort_recursion(list->a, 0, list->capacity - 1);
// }

// void	swap(int *x, int *y)
// {
// 	int	temp;

// 	temp = *x;
// 	*x = *y;
// 	*y = temp;
// }

// void	quicksort_recursion(int *array, int low, int high)
// {
// 	int	pivot_index;

// 	if (low < high)
// 	{
// 		pivot_index = partition(array, low, high);
// 		quicksort_recursion(array, low, pivot_index - 1);
// 		quicksort_recursion(array, pivot_index + 1, high);
// 	}
// }

// int	partition(int *array, int low, int high)
// {
// 	int	pivot_value;
// 	int	i;
// 	int	j;

// 	pivot_value = array[high];
// 	i = low;
// 	j = low;
// 	while (j < high)
// 	{
// 		if (array[j] <= pivot_value)
// 		{
// 			swap(&array[i], &array[j]);
// 			i++;
// 		}
// 		j++;
// 	}
// 	swap(&array[i], &array[high]);
// 	return (i);
// }

// void	quicksort(t_list *list)
// {
// 	quicksort_recursion(list->a, 0, list->capacity - 1);
// }
