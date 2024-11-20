#include <libft.h>
#include <push_swap.h>

void	ft_swap(int *list, int size)
{
	int	first;

	if (size < 2)
		return ;
	first = list[0];
	list[0] = list[1];
	list[1] = first;
}

void	sa(t_list *list)
{
	ft_swap(list->a, list->size_a);
	ft_printf("sa\n");
	list->test++;
}

void	sb(t_list *list)
{
	ft_swap(list->b, list->size_b);
	ft_printf("sb\n");
	list->test++;
}

void	ss(t_list *list)
{
	ft_swap(list->a, list->size_a);
	ft_swap(list->b, list->size_b);
	ft_printf("ss\n");
	list->test++;
}
