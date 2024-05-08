#include "search_algos.h"
void print_array(int *array, size_t left_limit, size_t right_limit);
/**
 * binary_search - function searches to a valur in an array with (BS)
 * @array: pointer to the first element of the list
 * @size: lenght of array
 * @value: value to search
 * Return: retrn index of value on success and -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL || !value)
		return (-1);
	if (size == 0 || !size)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (high + low) / 2;
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			low = mid + 1;
			continue;
		}
		if (array[mid] > value)
		{
			high = mid - 1;
			continue;
		}
	}
	return (-1);
}

/**
 * print_array - funtion prinst the content of an array
 * @array: pointer to the first element  of array
 * @left_limit: index of the first element of array
 * @right_limit: index od the last element of array
 * Return: return nothing
 */
void print_array(int *array, size_t left_limit, size_t right_limit)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left_limit; i <= right_limit; i++)
	{
		if (i == left_limit)
		{
			if (left_limit == right_limit)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d", array[i]);
		}
		else if (i == right_limit)
			printf(", %d\n", array[i]);
		else
			printf(", %d", array[i]);
	}
}
