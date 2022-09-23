#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, sizeof(ht));
    hash_node_t *node = malloc(sizeof(hash_node_t));
    hash_node_t **array;
    node -> key = malloc(sizeof(char)*strlen(key) + 4);
    node -> value = malloc(sizeof(char)*strlen(value) + 4);
    array = ht -> array;

    if (array[index] != NULL)
    {
        strcpy(node -> key , key);
        strcpy(node -> value , value);
        node -> next = array[index];
        array[index] = node;
        return 0;
    }
    else
    {
        strcpy(node -> key , key);
        strcpy(node -> value , value);
        node -> next = NULL;        
        array[index] = node;
        return 1;
    }
}