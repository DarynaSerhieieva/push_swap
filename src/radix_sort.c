#include <libft.h>
#include <push_swap.h>

void	counting_sort(t_list *list, int exp)
{
	int	*output;
	int	*count;
	int	digit;
	int	i;

	i = 0;
	count = (int *)malloc(list->capacity * sizeof(int));
	if (!count)
		return ;
	while (i < list->capacity)
	{
		count[(list->num_a[i].index / exp) % 10]++;
		i++;
	}
	i = 0;
	while (i < list->capacity)
	{
		count[i] += count[i - 1];
		i++;
	}
	i = list->capacity - 1;
	while (i >= 0)
	{
		digit = (list->num_a[i].index / exp) % 10;
		output[count[digit] - 1] = list->num_a[i].index ;
		count[digit]--;
		i--;
	}
	i = 0;
	while (i < list->capacity)
	{
		arr[i] = output[i];
		i++;
	}
}

void	radix_sort(t_list *list)
{
	int	exp;

	exp = 1;
	while (list->capacity / exp > 0)
	{
		if (list->size_b == 0)
			countingSort(list, exp);
		else
			countingSort(list, exp);
		exp *= 10;
	}
}
