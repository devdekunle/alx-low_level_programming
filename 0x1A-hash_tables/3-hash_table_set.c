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
	hash_node_t *node = NULL; 
	hash_node_t *new_node = NULL;

 	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);


	index = key_index((const unsigned char*)key, ht->size);

	/*assign pointer at index to another pointer*/
	node = ht->array[index];
	if (node == NULL)
	{
		/*pointer at index should point to new node*/
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);
		
		ht->array[index] = new_node;
		return (1);
		
	}
		/*if key already exists, we update only the value*/
	while (node != NULL)
	{	
		if (strcmp(node->key, key) == 0)
		{	
			free(node->value);
			node->value = strcpy(node->value, value);
			return (1);
		} 
		node = node->next;
	}
	/*creat a new node if key does not exist*/
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	/* handle collision and add node at the beginning of list*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

