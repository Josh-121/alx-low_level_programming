#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *table = malloc(sizeof(hash_table_t));
    table -> size = size;
    table -> array = malloc(sizeof(hash_node_t) * size);
    while (i < size)
    {
        table->array[i] = NULL ;
        i++ ;
    }
    return table;
}