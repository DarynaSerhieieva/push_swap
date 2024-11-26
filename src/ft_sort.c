#include <libft.h>
#include <push_swap.h>

// int	partition_a(t_list *list, int *array, int low, int high)
// {
// 	int	pivot_value;
// 	int	i;
// 	int	j;
// 	int	small;

// 	pivot_value = array[high];
// 	i = low;
// 	j = low;
// 	small = low;
// 	while (small != 0)
// 	{
// 		ra(list);
// 		small--;
// 	}
// 	while (j < high)
// 	{
// 		if (array[0] < pivot_value)
// 		{
// 			pb(list);
// 			// sort_b(list);
// 			i++;
// 		}
// 		else
// 			ra(list);
// 		j++;
// 	}
// 	ft_printf("/////////\n");
// 	while (list->size_b != 0)
// 		pa(list);
// 	while (low != 0)
// 	{
// 		rra(list);
// 		low--;
// 	}
// 	ft_printf("some: %d\n", i);
// 	ft_printf("Number A  after: ");
// 	for(int i = 0; i < list->capacity; i++)
// 	{
// 		ft_printf("%d,", list->a[i]);
// 	}
// 	ft_printf("\n");
// 	return (i);
// }
int partition_a(t_list *list, int *array, int low, int high) {
    int pivot_value = array[high];
    int i = low;

    // Rotate stack a to bring elements within range to the top
    for (int j = low; j < high; j++) {
        if (array[0] < pivot_value) {
            pb(list);  // Push smaller elements to stack b
            i++;
        } else {
            ra(list);  // Rotate to skip larger elements
        }
    }

    // Restore smaller elements from stack b back to a
    while (list->size_b > 0) {
        pa(list);
    }

    // Reverse rotate to restore order
    for (int j = 0; j < high - low; j++) {
        rra(list);
    }
	ft_printf("Number A  after: ");
	for(int i = 0; i < list->capacity; i++)
	{
		ft_printf("%d,", list->a[i]);
	}
	ft_printf("\n");
    return i;
}

void	quicksort_recursion(t_list *list, int *array, int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partition_a(list, array, low, high);
		quicksort_recursion(list, array, low, pivot_index - 1);
		quicksort_recursion(list, array, pivot_index + 1, high);
	}
}

void	quicksort(t_list *list)
{
	quicksort_recursion(list, list->a, 0, list->capacity - 1);
}

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
