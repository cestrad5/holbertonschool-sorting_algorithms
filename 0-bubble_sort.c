#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: array to sort.
 * @size: array size.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int traverse, number, tempo_swap, isInOrder;

	if (!size || !array || size < 2)
		return;

	for (traverse = 0; traverse <= size; traverse++)
	{
		isInOrder = 0;

		for (number = 0; number < size - 1; number++)
		{
			if (array[number] > array[number + 1])
			{
				tempo_swap = array[number];
				array[number] = array[number + 1];
				array[number + 1] = tempo_swap;
				print_array(array, size);

				isInOrder = 1;
			}
		}
		if (isInOrder == 0)
			break;
	}
}
