#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted
 * array using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1
 * if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;
	int curr = step;
	int i;
	int found = -1;

	if (array == NULL || size == 0)
		return (-1);

	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (i = prev; i < (int)size && i <= curr; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = i;
			break;
		}
	}
	return (found);
}
