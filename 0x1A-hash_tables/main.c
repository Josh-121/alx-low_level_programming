#include "hash_tables.h"


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "yeah");
    printf("%s\n",ht->array[1]->next->value);
    printf("%s",ht->array[1]->value);
    return (EXIT_SUCCESS);
}