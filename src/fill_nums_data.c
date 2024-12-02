#include <libft.h>
#include <push_swap.h>

int	fill_data(t_data **arrey_a, t_data **arrey_b, int capacity)
{
	int		i;
	bool	neg;

	i = 0;
	neg = false;
	*arrey_a = (t_data *)malloc(capacity * sizeof(t_data));
	if (!arrey_a)
		return (ft_printf("Error: memory allocation fals!\n"), 0);
	*arrey_b = (t_data *)malloc(capacity * sizeof(t_data));
	if (!arrey_b)
		return (ft_printf("Error: memory allocation fals!\n"), 0);
	while (i < capacity)
	{
		(*arrey_a)[i].num_int = 0;
		(*arrey_a)[i].num_char = NULL;
		(*arrey_a)[i].size = 0;
		(*arrey_a)[i].negative = neg;
		(*arrey_b)[i].num_int = 0;
		(*arrey_b)[i].num_char = NULL;
		(*arrey_b)[i].size = 0;
		(*arrey_b)[i].negative = neg;
		i++;
	}
	return (1);
}
