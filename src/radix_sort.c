#include <libft.h>
#include <push_swap.h>

void	counting_sort(t_list *list, int exp)
{
	int	output[n];
	int	count[10] = {0};

	for (int i = 0; i < n; i++) {
		count[(arr[i] / exp) % 10]++;
	}

	// Update count[i] to hold the actual position of the digit in output[]
	for (int i = 1; i < 10; i++) {
		count[i] += count[i - 1];
	}

	// Build the output array
	for (int i = n - 1; i >= 0; i--) {
		int digit = (arr[i] / exp) % 10;
		output[count[digit] - 1] = arr[i];
		count[digit]--;
	}

	// Copy the sorted elements back into the original array
	for (int i = 0; i < n; i++) {
		arr[i] = output[i];
	}
}

void	radix_sort(t_list *list, int max)
{
	int	exp;

	exp = 1;
	while (max / exp > 0)
	{
		if (list->size_b == 0)
			countingSort(list, exp);
		else
			countingSort(list, exp);
		exp *= 10;
	}
}
