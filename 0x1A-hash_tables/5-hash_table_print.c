#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int i;
    int comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            if (comma_flag)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            comma_flag = 1;
            node = node->next;
        }
    }
    printf("}\n");
}
