#include <libft.h>
#include <push_swap.h>

void	ft_sort(t_list *list)
{
	if (list->size_b > 1 && list->size_a > 1)
	{
		if (list->b[0] < list->b[list->size_b - 1] && list->b[0] < list->b[1] && \
			list->a[0] > list->a[list->size_a - 1] && list->a[0] > list->a[1])
			rr(list);
		if (list->b[0] < list->b[list->size_b - 1] && \
			list->a[0] > list->a[list->size_a - 1])
			rrr(list);
		if (list->b[0] < list->b[1] && list->a[0] > list->a[1])
			ss(list);
	}
	if (list->size_b > 1)
	{
		if (list->b[0] < list->b[list->size_b - 1] && list->b[0] < list->b[1])
			rb(list);
		if (list->b[0] < list->b[list->size_b - 1])
			rrb(list);
		if (list->b[0] < list->b[1])
			sb(list);
	}
	if (list->size_a > 1)
	{
		if (list->a[0] > list->a[list->size_a - 1] && list->a[0] > list->a[1])
			ra(list);
		if (list->a[0] > list->a[list->size_a - 1])
			rra(list);
		if (list->a[0] > list->a[1])
			sa(list);
	}
	if (list->size_a == 0)
		return ;
	pb(list);
	ft_sort(list);
	ft_printf("After\n");
}
