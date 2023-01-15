#include "hash_tables.h"
/**
 * hash_table_set - sets the key to the correct index
 * @ht: the table
 * @key: the key
 * @value: the value to insert
 * Return: the flag
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(node));
	if (node == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	if (ht->array[index] != NULL)
		ht->array[index] = node;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
