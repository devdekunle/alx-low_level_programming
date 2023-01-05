#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
* struct hash_node_s - Node of a hash table
*
*@key: The key, string
*The key is unique to the HashTable
*@: The value corresponding to a key
*#next: a pointer to the next node of the list
*/
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structute
*
*@size: The size of the array
*@array: An array of of size @size
* Each cell of this array is a pointer to the first nod of a linked list,
because we eant out HasjTable to use a Chaining collision handling
*/
typedef struct hast_table_s
{
    unsigned long int size;
    hash_node_t **array;

} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);






#endif