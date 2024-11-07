#include "libft.h"

void	ft_free_matrix(void **matrix, int size)
{
	int	i;

	if (!matrix || !*matrix)
		return ;
	i = 0;
	while (i < size)
	{
		free(matrix[i]);
		matrix[i] = NULL;
		i++;
	}
	free(matrix);
	matrix = NULL;
}
