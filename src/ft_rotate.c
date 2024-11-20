#include <libft.h>
#include <push_swap.h>

void	ft_rotate(int *list, int list_size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = list[0];
	if (list_size < 2)
		return ;
	while (i < list_size)
	{
		list[i] = list[i + 1];
		i++;
	}
	list[list_size - 1] = tmp;
}

void	ra(t_list *list)
{
	ft_rotate(list->a, list->size_a);
	ft_printf("ra\n");
	list->test++;
}

void	rb(t_list *list)
{
	ft_rotate(list->b, list->size_b);
	ft_printf("rb\n");
	list->test++;
}

void	rr(t_list *list)
{
	ft_rotate(list->a, list->size_a);
	ft_rotate(list->b, list->size_b);
	ft_printf("rr\n");
	list->test++;
}
