#include <libft.h>
#include <push_swap.h>
#include <time.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	partition(int array[], int low, int high)
{
	int	pivot_index;
	int	pivot_value;
	int	i;
	int	j;

	pivot_index = low + (rand() % (high - low));
	if (pivot_index != high)
		swap(&array[pivot_index], &array[high]);
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

void	quicksort_recursion(int array[], int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

void	fill_index(t_data *array, int *nums, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (nums[i] == array[j].num_int)
			{
				array[j].index = i;
			}
			j++;
		}
		i++;
	}
}

void	quicksort(t_list *list)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(list->capacity * sizeof(int));
	if (!array)
	{
		ft_printf("Error: memory allocation fals!\n");
		return ;
	}
	while (i < list->capacity)
	{
		array[i] = list->num_a[i].num_int;
		i++;
	}
	srand(time(NULL));
	quicksort_recursion(array, 0, list->capacity - 1);
	fill_index(list->num_a, array, list->capacity);
	free(array);
	array = NULL;
}
