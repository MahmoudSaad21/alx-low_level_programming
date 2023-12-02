#include "hash_tables.h"
/**
* hash_table_get - function
* @ht: table to search
* @key: key to retrieve
*
* Description: function to get value from a passed key.
* Return: Value of key or NULL if fail
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp;
unsigned long int index;
if (ht == NULL)
return (NULL);
if (key == NULL || (strcmp(key, "") == 0))
return (NULL);
index = (hash_djb2((const unsigned char *)key) % (ht->size));
temp = ht->array[index];
while (temp)
{
if (strcmp(key, temp->key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
