#include <libft.h>
#include <push_swap.h>

int	list_size(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		ft_printf("here: %s\n", list[i]);
		i++;
	}
	return (i);
}

