#include <libft.h>
#include <push_swap.h>

void	ft_push(t_data *dest, t_data *list, int *dest_size, int *list_size)
{
	int		i;
	int		j;
	t_data	tmp;

	i = 0;
	tmp = dest[*dest_size];
	if (*list_size < 1)
		return ;
	j = *dest_size;
	while (j > 0)
	{
		dest[j] = dest[j - 1];
		j--;
	}
	dest[0] = list[0];
	while (i < *list_size)
	{
		list[i] = list[i + 1];
		i++;
	}
	list[*list_size - 1] = tmp;
	*dest_size += 1;
	*list_size -= 1;
}

void	pa(t_list *list)
{
	ft_push(list->num_a, list->num_b, &list->size_a, &list->size_b);
	ft_printf("pa\n");
	list->moves++;
}

void	pb(t_list *list)
{
	ft_push(list->num_b, list->num_a, &list->size_b, &list->size_a);
	ft_printf("pb\n");
	list->moves++;
}
