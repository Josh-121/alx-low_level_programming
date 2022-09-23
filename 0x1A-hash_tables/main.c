#include "hash_tables.h"


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "yeah");

    while(i < (int)ht->size)
    {
        if(ht->array[i] != NULL)
            printf("%d %s--------%s------%s\n",i,ht->array[i]->key,ht->array[i]->value,ht->array[i]->next->value);
        else
            printf("%d NULL\n",i);
        i++ ;
    }

    return (EXIT_SUCCESS);
}