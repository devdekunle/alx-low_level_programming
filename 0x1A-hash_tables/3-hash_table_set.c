#include "hash_tables.h"
/**
*create_node - Node of a hash table 
*@key: key to set the value
*@value: value of the node
*Return 1 or 0
*/
hash_node_t* create_node(const char *key, const char *value)
{
	
	hash_node_t *ptr_node = NULL;
	if (strlen(key) == 48 || key == NULL || value == NULL)
		return (NULL);

	ptr_node = malloc(sizeof(hash_node_t));
	if (ptr_node == NULL)
	{
		free(ptr_node);
		return (NULL);
	
	}
		
		/*assign memory for struct members*/
	ptr_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (ptr_node->key == NULL)
	{	free(ptr_node->key);
		return (NULL);
	}
	ptr_node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (ptr_node->value == NULL)
	{
		free(ptr_node->value);
		return (NULL);
	}

		/*duplicate argument pointer to struct members*/
	ptr_node->key = strcpy(ptr_node->key, key);
	ptr_node->value = strcpy(ptr_node->value, value);

	ptr_node->next = NULL;

	return (ptr_node);
}

/**
*hash_table_set - set the table
*@ht: table to set the key/value to
*@key: key 
*@value: value to add
*Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr_node, *ptr_index = NULL;

 
	/*create a node and assign a pointer to newly created node*/
	ptr_node = create_node(key, value);
	if (ptr_node == NULL)
		return (0);
	/* get index from hash function to determine index to insert
		node in hash table		
	*/

	index = key_index((const unsigned char*)key, ht->size);

	/*assign pointer at index to another pointer*/
	ptr_index = ht->array[index];
	/*if ptr_index is null, key does not exist*/
	if (ptr_index == NULL)
	{
		/*pointer at index should point to new node*/
		ptr_index = ptr_node;

		
	}
		/*if key already exists, we update only the value*/
	else if (strcmp(ptr_node->key, key) == 0)
	{
			strcpy(ptr_index->value, value);
			return (1);

	}
	else 
	{
		ptr_node->next = ptr_index;

	}

	return (1);
}

