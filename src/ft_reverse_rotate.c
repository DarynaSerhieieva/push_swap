#include <libft.h>
#include <push_swap.h>


void	ft_reverse_rotate(int *list, int list_size)
{
	int	i;
	int	tmp;

	i = list_size - 1;
	tmp = list[i];
	if (list_size < 2)
		return ;
	while (i > 0)
	{
		list[i] = list[i - 1];
		i--;
	}
	list[0] = tmp;
}

void	rra(t_list *list)
{
	ft_reverse_rotate(list->a, list->size_a);
	ft_printf("rra\n");
}

void	rrb(t_list *list)
{
	ft_reverse_rotate(list->b, list->size_b);
	ft_printf("rrb\n");
}

void	rrr(t_list *list)
{
	ft_reverse_rotate(list->a, list->size_a);
	ft_reverse_rotate(list->b, list->size_b);
	ft_printf("rrr\n");
}
