#include <libft.h>
#include <push_swap.h>

void	sort_b(t_list *list)
{
	if (list->size_b <= 1)
		return ;
	if (list->b[0] < list->b[1] && list->b[0] < list->b[list->size_b -1] && \
		list->b[list->size_b -1] > list->b[1])
		rb(list);
	if (list->b[0] < list->b[1])
		sb(list);
	if (list->b[0] < list->b[list->size_b -1])
		rrb(list);
}

void	sort_a(t_list *list)
{
	if (list->size_a <= 1)
		return ;
	if (list->a[0] > list->a[1] && list->a[0] > list->a[list->size_a - 1] && \
		list->a[list->size_a - 1] < list->a[1])
		ra(list);
	if (list->a[0] > list->a[1])
		sa(list);
	if (list->a[0] > list->a[list->size_a - 1])
		rra(list);
}

void	sort_a_b(t_list *list)
{
	if (list->size_a > 2 && list->size_b > 2)
	{
		if (list->a[0] > list->a[1] && list->a[0] > list->a[list->size_a - 1] && \
		list->a[list->size_a - 1] < list->a[1] && \
		list->b[0] < list->b[1] && list->b[0] < list->b[list->size_b -1] && \
		list->b[list->size_b -1] > list->b[1])
			rr(list);
		if (list->a[0] > list->a[1] && list->b[0] < list->b[1])
			ss(list);
		if (list->a[0] > list->a[list->size_a - 1] && \
			list->b[0] < list->b[list->size_b - 1])
			rrr(list);
	}
}

void	quicksort_a(t_list *list)
{
	pb(list);
	sort_a_b(list);
	sort_b(list);
	sort_a(list);
	if (list->size_a <= 1)
		return ;
	else
		quicksort_a(list);
}

void	merg(t_list *list)
{
	sort_a_b(list);
	sort_b(list);
	sort_a(list);
	pa(list);
	if (list->size_b == 0)
		return ;
	else
		merg(list);
}

void	ft_sort(t_list *list)
{
	sort_a_b(list);
	sort_a(list);
	sort_b(list);
	quicksort_a(list);
	merg(list);
}

// void	partition(t_list *list, int pivot, int size)
// {
// 	int	i;
// 	int	pushed;

// 	i = 0;
// 	pushed = 0;
// 	while (i < size)
// 	{
// 		if (list->a[0] < pivot)
// 		{
// 			pb(list);
// 			pushed++;
// 		}
// 		else
// 		{
// 			ra(list);
// 		}
// 		i++;
// 	}

// 	while (i > size - pushed)
// 	{
// 		ft_printf("size: %d, difrent: %d, i: %d", list->size_a, size - pushed, i);
// 		rra(list);
// 		i--;
// 	}
// }

// void	quicksort_b(t_list *list, int size)
// {
// 	if (size <= 1) // Base case: 1 or no elements, already sorted
// 		return;

// 	// Choose a pivot (e.g., the first element of `b`)
// 	int pivot = list->b[0];

// 	// Partition `b` into two parts
// 	partition(list, pivot, size);

// 	// Sort the smaller elements in `a`
// 	quicksort_a(list, list->size_a);

// 	// Sort the remaining elements in `b`
// 	quicksort_b(list, size - list->size_a);
// }

// void	quicksort_a(t_list *list, int size)
// {
// 	int	pivot;

// 	if (size <= 1)
// 		return ;
// 	pivot = list->a[0];

// 	partition(list, pivot, size);

// 	// Sort the smaller elements in `b`
// 	quicksort_b(list, list->size_b);

// 	// Sort the remaining elements in `a`
// 	quicksort_a(list, size - list->size_b);

// 	// Merge back from `b` to `a`
// 	while (list->size_b > 0)
// 	{
// 		pa(list);
// 	}
// }

// void	ft_sort(t_list *list)
// {
// 	quicksort_a(list, list->size_a);
// }


// void	ft_sort(t_list *list)
// {
// 	if (list->size_b > 1 && list->size_a > 1)
// 	{
// 		if (list->b[0] < list->b[list->size_b - 1] && list->b[0] < list->b[1] && 
// 			list->a[0] > list->a[list->size_a - 1] && list->a[0] > list->a[1])
// 			rr(list);
// 		if (list->b[0] < list->b[list->size_b - 1] && 
// 			list->a[0] > list->a[list->size_a - 1])
// 			rrr(list);
// 		if (list->b[0] < list->b[1] && list->a[0] > list->a[1])
// 			ss(list);
// 	}
// 	if (list->size_b > 1)
// 	{
// 		if (list->b[0] < list->b[list->size_b - 1] && list->b[0] < list->b[1])
// 			rb(list);
// 		if (list->b[0] < list->b[list->size_b - 1])
// 			rrb(list);
// 		if (list->b[0] < list->b[1])
// 			sb(list);
// 	}
// 	if (list->size_a > 1)
// 	{
// 		if (list->a[0] > list->a[list->size_a - 1] && list->a[0] > list->a[1])
// 			ra(list);
// 		if (list->a[0] > list->a[list->size_a - 1])
// 			rra(list);
// 		if (list->a[0] > list->a[1])
// 			sa(list);
// 	}
// 	if (list->size_a == 0)
// 		return ;
// 	pb(list);
// 	ft_sort(list);
// 	ft_printf("After\n");
// }
