#include "hash_tables.h"
/**
*hash_table_get - get a value from a key
*@ht: table to search
*@key: key being looked for
*Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *ptr;

	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (NULL);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);


}
