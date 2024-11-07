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

// void	ft_push(int *dest, int *list, int size)
// {
// 	int	i;
// 	int	j;
// 	int	num;

// 	if (list[0] == NULL)
// 		return ;
// 	while (i < size)
// 	{
		
// 	}
	
// }
