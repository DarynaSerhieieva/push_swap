#include <libft.h>
#include <push_swap.h>

void	ft_rotate(t_data *arrey, int size)
{
	int		i;
	t_data	tmp;

	i = 0;
	tmp = arrey[0];
	if (size < 2)
		return ;
	while (i < size - 1)
	{
		arrey[i] = arrey[i + 1];
		i++;
	}
	arrey[size - 1] = tmp;
}

void	ra(t_list *list)
{
	ft_rotate(list->num_a, list->size_a);
	ft_printf("ra\n");
	list->moves++;
}

void	rb(t_list *list)
{
	ft_rotate(list->num_b, list->size_b);
	ft_printf("rb\n");
	list->moves++;
}

void	rr(t_list *list)
{
	ft_rotate(list->num_a, list->size_a);
	ft_rotate(list->num_b, list->size_b);
	ft_printf("rr\n");
	list->moves++;
}
