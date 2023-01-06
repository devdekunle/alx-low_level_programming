#include "hash_tables.h"
/**
*key_index - gets the index of the key in the hash table
*@key: key to manipulate
*@size: size of the hash table
*Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	if (isdigit((int)size) == '0' || (int)size <= 0 || key == NULL)
		return (1);
	/*call hash_djb2 function to get hash value*/
	hash = hash_djb2(key);

	/*get index from hash and table size*/
	index = hash % size;
	return (index);

}
