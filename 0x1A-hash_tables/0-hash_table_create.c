#include "hash_tables.h"
/**
*hash_table_create - create a new hash table
*@size: size of the table
*Return: pointer to created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ptr_table = NULL;

	if (!size)
		return (NULL);

	ptr_table = malloc(sizeof(hash_table_t));
	if (ptr_table == NULL)
	{

		return (NULL);
	}
	ptr_table->size = size;
	/*allocate memory for pointer to hash_node pointers*/
	ptr_table->array = malloc(sizeof(hash_node_t) * size);

	if (ptr_table->array == NULL)
	{
		free(ptr_table);
		return (NULL);
	}
	/*assign each pointer in the array of pointers to NULL*/
	for (i = 0; i < size; i++)
	{
		ptr_table->array[i] = NULL;

	}
	return (ptr_table);

}



