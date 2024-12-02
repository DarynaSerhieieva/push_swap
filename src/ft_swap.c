#include <libft.h>
#include <push_swap.h>

void	ft_swap(t_data *x, t_data *y, int size)
{
	t_data	tmp;

	if (size < 2)
		return ;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	sa(t_list *list)
{
	ft_swap(&list->num_a[0], &list->num_a[1], list->size_a);
	ft_printf("sa\n");
	list->moves++;
}

void	sb(t_list *list)
{
	ft_swap(&list->num_b[0], &list->num_b[1], list->size_b);
	ft_printf("sb\n");
	list->moves++;
}

void	ss(t_list *list)
{
	ft_swap(&list->num_a[0], &list->num_a[1], list->size_a);
	ft_swap(&list->num_b[0], &list->num_b[1], list->size_b);
	ft_printf("ss\n");
	list->moves++;
}
