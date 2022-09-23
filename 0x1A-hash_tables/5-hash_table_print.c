#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
    int i = 0;
    int out = 0;
    printf("{");
    while(i < (int)ht->size)
    {
        if(ht->array[i] != NULL)
        {
            if (out > 0)
                printf(", ");
            printf("\'%s\': \'%s\'",ht->array[i]->key,ht->array[i]->value);
            out++;
        }

        i++ ;
    }
    printf("}\n");
}