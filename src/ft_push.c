#include <libft.h>
#include <push_swap.h>

void	ft_push(int *dest, int *list, int *dest_size, int *list_size)
{
	int	i;
	int	j;
	int	tmp;

	tmp = list[0];
	i = 0;
	if (*list_size < 1)
		return ;
	while (i < *list_size)
	{
		list[i] = list[i + 1];
		i++;
	}
	j = *dest_size;
	while (j >= 0)
	{
		dest[j + 1] = dest[j];
		j--;
	}
	dest[0] = tmp;
	*dest_size += 1;
	*list_size -= 1;
}

void	pa(t_list *list)
{
	ft_push(list->a, list->b, &list->size_a, &list->size_b);
	ft_printf("pa\n");
}

void	pb(t_list *list)
{
	ft_push(list->b, list->a, &list->size_b, &list->size_a);
	ft_printf("pb\n");
}
