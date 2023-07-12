#include "lists.h"

/**
 * print_list - Prints all elements of list_t
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

 size_t print_list(const list_t *h)
 {
    const list_t *temp = h;
    unsigned int i = 0;

    while (temp)
    {
        if (!((*temp).str))
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", (*temp).len, (*temp).str);
        
        i++;
        temp = (*temp).next;
    }

    return (i);
 }