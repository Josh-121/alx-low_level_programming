#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    hash_node_t **array = ht->array;
    if (array[index] == NULL || strcmp(array[index]->key,key) != 0)
    {
        return NULL;
    }
    return (array[index]->value);
}