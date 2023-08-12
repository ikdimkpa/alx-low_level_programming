#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table
 * on sucess, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	/* Reserve memory to store the table */
	hash_table_t *table = NULL;

	/* Create the table */
	table = malloc(sizeof(hash_table_t));

	/* Check if the table was created */
	if (!table)
		return (NULL);

	/* Initialize the table */
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * table->size);

	/* Check if array was created */
	if (!table->array)
		return (NULL);

	/* Initialize all elements of the array to NULL */
	/*for (i = 0; i < table->size; i++)
		table->array[i] = NULL;*/
	while (i < table->size)
	{
		table->array[i] = NULL;
		/*table->array->next = NULL;*/
		i++;
	}

	/* Return a pointer to the table */
	return (table);
}
