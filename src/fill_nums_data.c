#include <libft.h>
#include <push_swap.h>

int	fill_data(t_data **array_a, t_data **array_b, int capacity)
{
	int		i;
	bool	neg;

	i = 0;
	neg = false;
	*array_a = (t_data *)malloc(capacity * sizeof(t_data));
	if (!array_a)
		return (ft_printf("Error: memory allocation fals!\n"), 0);
	*array_b = (t_data *)malloc(capacity * sizeof(t_data));
	if (!array_b)
		return (ft_printf("Error: memory allocation fals!\n"), 0);
	while (i < capacity)
	{
		(*array_a)[i].num_int = 0;
		(*array_a)[i].num_char = NULL;
		(*array_a)[i].index = 0;
		(*array_a)[i].negative = neg;
		(*array_b)[i].num_int = 0;
		(*array_b)[i].num_char = NULL;
		(*array_b)[i].index = 0;
		(*array_b)[i].negative = neg;
		i++;
	}
	return (1);
}
