#include <libft.h>
#include <push_swap.h>

void	sort_two(t_list *list)
{
	if (list->a[0] > list->a[1])
		sa(list);
}

void	sort_three(t_list *list)
{
	sort_a(list);
}

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
	int	i;

	i = 0;
	// 0 - 1/ 1 - 2 /
	while (i < 2)
	{
		if (list->size_b > 1)
		{
			sort_a_b(list);
			sort_b(list);
			sort_a(list);
		}
		else
			sort_a(list);
		pb(list);
		i++;
	}
	while (i < 4)
	{
		/* code */
	}
	
	pa(list);
	sort_a(list);
	pa(list);
	sort_a(list);
}

int	sort_five(t_list *list)
{
	if (list->capacity == 2)
		sort_two(list);
	if (list->capacity == 3)
		sort_three(list);
	if (list->capacity == 4)
		sort_four(list);
	if (list->capacity == 5)
		sort_four(list);
}
