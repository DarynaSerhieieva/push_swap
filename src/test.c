#include <libft.h>
#include <push_swap.h>
// void counting_sort_a(t_list *list, int exp)
// {
//     int count[10] = {0}; // Fixed size array is faster than dynamic allocation
//     int rotations = 0;

//     // Count occurrences
//     for (int i = 0; i < list->size_a; i++)
//         count[(list->num_a[i].index / exp) % 10]++;

//     for (int digit = 0; digit <= 9; digit++)
//     {
//         while (count[digit] > 0)
//         {
//             int current_digit = (list->num_a[0].index / exp) % 10;
//             if (current_digit == digit)
//             {
//                 pb(list); // Push to stack B
//                 count[digit]--;
//             }
//             else
//             {
//                 ra(list); // Rotate stack A
//                 rotations++;
//             }
//         }
//         // Minimize rotations after each digit bucket is processed
//         while (rotations-- > 0)
//             rra(list);
//         rotations = 0;
//     }
// }

// void	counting_sort_b(t_list *list, int exp)
// {
// 	int	count[10];
// 	int	rotations;
// 	int	digit;
// 	int	current_digit;
// 	int	i;

// 	i = 0;
// 	rotations = 0;
// 	while (i < 10)
// 		count[i++] = 0;
// 	i = 0;
// 	while (i < list->size_b)
// 	{
// 		count[(list->num_b[i].index / exp) % 10]++;
// 		i++;
// 	}
// 	digit = 9;
// 	while (digit >= 0)
// 	{
// 		while (count[digit] > 0)
// 		{
// 			current_digit = (list->num_b[0].index / exp) % 10;
// 			if (current_digit == digit)
// 			{
// 				pa(list);
// 				count[digit]--;
// 			}
// 			else
// 			{
// 				rb(list);
// 				rotations++;
// 			}
// 		}
// 		while (rotations-- > 0)
// 			rrb(list);
// 		rotations = 0;
// 		digit--;
// 	}
// }

// void	radix_sort(t_list *list)
// {
// 	int	exp;

// 	exp = 1;
// 	while (list->capacity -1 / exp > 0)
// 	{
// 		counting_sort_a(list, exp);
// 		counting_sort_b(list, exp);
// 		exp *= 10;
// 	}
// }






void	counting_sort_b(t_list *list, int exp)
{
	int	digit;
	int	*count;
	int	i;
	int	j;

	count = ft_calloc(10, sizeof(int));
	if (!count)
		return ;
	i = 0;
	while (i < list->capacity)
	{
		count[(list->num_b[i].index / exp) % 10]++;
		i++;
	}
	j = 9;
	i = 0;
	while (j > 0)
	{
		if (list->size_b < 1)
			break ;
		digit = (list->num_b[0].index / exp) % 10;
		if (digit == j)
		{
			pa(list);
			count[j]--;
		}
		else
		{
			rb(list);
			i++;
		}
		if (count[j] == 0)
		{
			while (i >= 0)
			{
				rrb(list);
				i--;
			}
			j--;
		}
	}
	ft_printf("Index a  after: ");
	for(int i = 0; i < list->capacity; i++)
	{
		ft_printf("%d, ", list->num_a[i].index);
	}
	ft_printf("\n");
	free(count);
}

void	counting_sort(t_list *list, int exp)
{
	int	digit;
	int	*count;
	int	i;
	int	j;

	count = ft_calloc(10, sizeof(int));
	if (!count)
		return ;
	i = 0;
	while (i < list->capacity)
	{
		count[(list->num_a[i].index / exp) % 10]++;
		i++;
	}
	if (count[0] == list->capacity)
		return ;
	j = 1;
	i = 0;
	while (j <= 9)
	{
		if (list->size_a < 1)
			break ;
		digit = (list->num_a[0].index / exp) % 10;
		if (digit == j)
		{
			pb(list);
			count[j]--;
		}
		else
		{
			ra(list);
			i++;
		}
		if (count[j] == 0)
		{
			while (i >= 0)
			{
				rra(list);
				i--;
			}
			j++;
		}
			
	}
	ft_printf("Index b  after: ");
	for(int i = 0; i < list->capacity; i++)
	{
		ft_printf("%d, ", list->num_b[i].index);
	}
	ft_printf("\n");
	free(count);
}

void	radix_sort(t_list *list)
{
	int	exp;

	exp = 1;
	while (list->capacity / exp > 0)
	{
		counting_sort(list, exp);
		counting_sort_b(list, exp);
		exp *= 10;
	}
}
