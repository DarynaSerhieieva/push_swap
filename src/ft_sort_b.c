#include <libft.h>
#include <push_swap.h>

void	sort_b(t_list *list)
{
	if (list->size_b <= 1)
		return ;
	if (list->num_b[0].num_int < list->num_b[1].num_int && \
	list->num_b[0].num_int < list->num_b[list->size_b -1].num_int)
		rb(list);
	if (list->num_b[0].num_int < list->num_b[1].num_int)
		sb(list);
	if (list->num_b[0].num_int < list->num_b[list->size_b -1].num_int)
		rrb(list);
}

void	sort_a(t_list *list)
{
	if (list->size_a <= 1)
		return ;
	if (list->num_a[0].num_int > list->num_a[1].num_int && \
	list->num_a[0].num_int > list->num_a[list->size_a - 1].num_int)
		ra(list);
	if (list->num_a[0].num_int > list->num_a[1].num_int)
		sa(list);
	if (list->num_a[0].num_int > list->num_a[list->size_a - 1].num_int)
		rra(list);
}

void	sort_a_b(t_list *list)
{
	if (list->size_a <= 1 && list->size_b <= 1)
		return ;
	if (list->num_a[0].num_int > list->num_a[1].num_int && \
	list->num_a[0].num_int > list->num_a[list->size_a - 1].num_int && \
	list->num_b[0].num_int < list->num_b[1].num_int && \
	list->num_b[0].num_int < list->num_b[list->size_b -1].num_int)
		rr(list);
	if (list->num_a[0].num_int > list->num_a[1].num_int && \
	list->num_b[0].num_int < list->num_b[1].num_int)
		ss(list);
	if (list->num_a[0].num_int > list->num_a[list->size_a - 1].num_int && \
		list->num_b[0].num_int < list->num_b[list->size_b - 1].num_int)
		rrr(list);
}
