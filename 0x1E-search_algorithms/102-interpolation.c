#include "search_algos.h"
/**
 * interpolation_search - function searches for an element in an array
 * @array: pointer to the first elemen of the array
 * @size: length of array
 * @value: element to search for
 * Return: returns the index of the value on success or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high, i, fst_seg, sec_seg;

	if (array == NULL || !value)
		return (-1);
	if (size == 0 || !size)
		return (-1);

	low = 0;
	high = size - 1;
	fst_seg = (double)(high - low) / (array[high] - array[low]);
	sec_seg = (value - array[low]);
	pos = low + (fst_seg * sec_seg);

	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	for (i = pos; i < pos + 2; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
