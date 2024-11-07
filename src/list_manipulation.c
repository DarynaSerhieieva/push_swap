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

// void	ft_push(int *dest, int *list, int size_a, int size_b, int capacity)
// {
// 	int	i;
// 	int	j;
// 	int	tmp;

// 	if (*list <= 0)
// 	{
// 		ft_printf("work:\n");
// 		return ;
// 	}
// 	tmp = list[0];
// 	i = 0;
// 	while (i < size)
// 	{
// 		list[i] = list[i + 1];
// 		i++;
// 	}
// 	j = size - 1;
// 	while (j > 0)
// 	{
// 		ft_printf("here befor: %d, %d\n", dest[j], j);
// 		dest[j] = dest[j - 1];
// 		ft_printf("here: %d\n", dest[j]);
// 		j--;
// 	}
// 	dest[size] = tmp;
// }
