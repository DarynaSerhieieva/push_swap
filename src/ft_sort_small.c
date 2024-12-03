#include <libft.h>
#include <push_swap.h>


void	sort_four(t_list *list)
{
	sort_a(list);
	pb(list);
	sort_a(list);
	pa(list);
	sort_a(list);
}

void	sort_five(t_list *list)
{
	sort_a(list);
	pb(list);
	sort_a(list);
	pb(list);
	sort_a_b(list);
	sort_b(list);
	sort_a(list);
	pa(list);
	sort_a(list);
	pa(list);
	sort_a(list);
}

void	ft_sort_small(t_list *list)
{
	if (list->capacity == 2)
		sort_a(list);
	if (list->capacity == 3)
		sort_a(list);
	if (list->capacity == 4)
		sort_four(list);
	if (list->capacity == 5)
		sort_five(list);
}
