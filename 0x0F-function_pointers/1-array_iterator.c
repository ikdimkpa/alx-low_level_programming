/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array to iterate.
 * @size: size of the array.
 * @action: pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			(*action)(*array[i]);
			i++;
		}
	}
}
