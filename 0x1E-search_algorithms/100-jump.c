#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function searches a value from array using jump search
 * @array: pointer to the first element of the array
 * @size: lenght of array
 * @value: the value being searched
 * Return: returns index of value on success or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump, i;

	if (array == NULL || !value)
		return (-1);
	if (size <= 0 || !size)
		return (-1);

	jump = sqrt(size - 1);
	low = 0;
	high = jump;

	while (low <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[high] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i < high + 1; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		low = high;
		high += jump;
	}
	return (-1);
}
