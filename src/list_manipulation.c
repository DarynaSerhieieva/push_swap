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
