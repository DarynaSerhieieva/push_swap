#include <libft.h>
#include <push_swap.h>

void	ft_push(int *dest, int *list, int *dest_size, int *list_size)
{
	int	i;
	int	j;

	i = 0;
	if (*list_size < 1)
		return ;
	j = *dest_size + 1;
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
	list[*list_size - 1] = 0;
	*dest_size += 1;
	*list_size -= 1;
}

// void	ft_push(int *dest, int *list, int *dest_size, int *list_size)
// {
// 	int	i;
// 	int	j;
// 	int	tmp;

// 	tmp = list[0];
// 	i = 1;
// 	if (*list_size < 1)
// 		return ;
// 	while (i < *list_size)
// 	{
// 		list[i - 1] = list[i];
// 		i++;
// 	}
// 	list[*list_size - 1] = 0;
// 	j = *dest_size;
// 	while (j >= 0)
// 	{
// 		dest[j + 1] = dest[j];
// 		j--;
// 	}
// 	dest[0] = tmp;
// 	*dest_size += 1;
// 	*list_size -= 1;
// }

void	pa(t_list *list)
{
	ft_push(list->a, list->b, &list->size_a, &list->size_b);
	ft_printf("pa\n");
	list->test++;
}

void	pb(t_list *list)
{
	ft_push(list->b, list->a, &list->size_b, &list->size_a);
	ft_printf("pb\n");
	list->test++;
}
