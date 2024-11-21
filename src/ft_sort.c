#include <libft.h>
#include <push_swap.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	quicksort_recursion(int *array, int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

int	partition(int *array, int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;

	pivot_value = array[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
		j++;
	}
	swap(&array[i], &array[high]);
	return (i);
}

void	quicksort(t_list *list, int *arrey, int size, char letter)
{
	int	pivot_value;
	int	j;

	pivot_value = arrey[size - 1];
	j = 0;
	printf("pivot_value: %d\n", pivot_value);
	while (j < size)
	{
		// sort_a_b(list);
		// sort_a(list);
		sort_b(list);

		// ft_printf("Number A  after: ");
		// for(int i = 0; i < list->capacity; i++)
		// 	{
		// 		ft_printf("%d,", list->a[i]);
		// 	}
		// ft_printf("\n");
		if (arrey[j] <= pivot_value)
		{
			if (letter == 'a')
				pb(list);
			else
				pa(list);
		}
		else
		{
			if (letter == 'a')
				ra(list);
			else
				rb(list);
		}
		j++;
	}
	if (list->size_b == 1)
	{
		quicksort(list, list->a, list->size_a, 'a');
	}
	if (list->size_a == 0)
	{
		quicksort(list, list->b, list->size_b, 'b');
	}

	// quicksort_recursion(list->a, 0, list->capacity - 1);
}

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
