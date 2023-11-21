#include "sort.h"

/**
 * swap_int - this swaps two integers in an array.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int temp;

	tmp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - this sorts an array of integers in ascending order.
 * @array: An array of integers to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: Prints the array after each swap.
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(array + j, array + j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
