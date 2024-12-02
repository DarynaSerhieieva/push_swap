#include <libft.h>
#include <push_swap.h>


void	ft_reverse_rotate(t_data *arrey, int size)
{
	int		i;
	t_data	tmp;

	i = size - 1;
	tmp = arrey[i];
	if (size < 2)
		return ;
	while (i > 0)
	{
		arrey[i] = arrey[i - 1];
		i--;
	}
	arrey[0] = tmp;
}

void	rra(t_list *list)
{
	ft_reverse_rotate(list->num_a, list->size_a);
	ft_printf("rra\n");
	list->moves++;
}

void	rrb(t_list *list)
{
	ft_reverse_rotate(list->num_b, list->size_b);
	ft_printf("rrb\n");
	list->moves++;
}

void	rrr(t_list *list)
{
	ft_reverse_rotate(list->num_a, list->size_a);
	ft_reverse_rotate(list->num_b, list->size_b);
	ft_printf("rrr\n");
	list->moves++;
}
