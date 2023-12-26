#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key
 * Return: Value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);

    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}
