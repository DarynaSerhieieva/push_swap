#include <libft.h>
#include <push_swap.h>

int	list_size(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

void	free_memory(t_list *list)
{
	if (list->start_index == 0 && list->list_a)
		ft_free_matrix((void **)list->list_a, list->capacity);
	if (list->a)
	{
		free(list->a);
		list->a = NULL;
	}
	if (list->b)
	{
		free(list->b);
		list->b = NULL;
	}
}
