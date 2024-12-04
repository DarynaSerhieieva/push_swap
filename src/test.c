#include <libft.h>
#include <push_swap.h>

void	counting_sort(t_list *list, int exp)
{
	int	digit;
	int	*count;
	int	i;
	int	j;

	count = (int *)malloc(10 * sizeof(int));
	if (!count)
		return ;
	i = 0;
	while (i < list->capacity)
	{
		count[(list->num_a[i].index / exp) % 10]++;
		i++;
	}
	if (count[0] == list->capacity)
		return ;
	// i = list->size_a - 1;
	j = 0;
	while (j < 9)
	{
		if (list->size_a < 1)
			break ;
		digit = (list->num_a[0].index / exp) % 10;
		if (digit == j)
		{
			pb(list);
			count[j]--;
		}
		else
			ra(list);
		if (count[j] == 0)
			j++;
		// if (count[j] == 0 || i < 1)
		// {
		// 	j++;
		// 	i = list->size_a;
		// }
		// i--;
	}
	while (list->size_b != 0)
	{
		pa(list);
	}
	free(count);
}

void	radix_sort(t_list *list)
{
	int	exp;

	exp = 1;
	while (list->capacity / exp > 0)
	{
		counting_sort(list, exp);
		exp *= 10;
	}
}
