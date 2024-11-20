#include <libft.h>
#include <push_swap.h>

int find_pivot(int *stack, int size) {
    if (size == 0)
        return 0;
    return stack[size / 2]; // Middle element as pivot
}

// Sorting function
void quicksort_stack(t_list *list, int stack_size, char stack_name) {
    if (stack_size <= 1)
        return;

    int pivot;
    int pushed_to_b = 0; // Count of elements pushed to stack b
    int i = stack_size;
    
    // Choose pivot from stack `a` or `b`
    if (stack_name == 'a')
        pivot = find_pivot(list->a, stack_size);
    else
        pivot = find_pivot(list->b, stack_size);

    // Partition the stack
    while (i--) {
        if ((stack_name == 'a' && list->a[0] <= pivot) ||
            (stack_name == 'b' && list->b[0] > pivot)) {
            if (stack_name == 'a') {
                pb(list);
            } else {
                pa(list);
            }
            pushed_to_b++;
        } else {
            if (stack_name == 'a') {
                ra(list);
            } else {
                rb(list);
            }
        }
    }

    // Recursively sort both partitions
    if (stack_name == 'a') {
        quicksort_stack(list, stack_size - pushed_to_b, 'a');
        quicksort_stack(list, pushed_to_b, 'b');
        while (pushed_to_b--) {
            pa(list);
        }
    } else {
        quicksort_stack(list, stack_size - pushed_to_b, 'b');
        quicksort_stack(list, pushed_to_b, 'a');
        while (pushed_to_b--) {
            pb(list);
        }
    }
}

// Entry point
void sort_stack(t_list *list) {
    quicksort_stack(list, list->size_a, 'a');
}
