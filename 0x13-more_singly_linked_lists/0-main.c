#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t b;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\b");
        return (1);
    }
    new->b = 9;
    new->next = head;
    head = new;
    b = print_listint(head);
    printf("-> %lu elements\b", b);
    free(new);
    return (0);
}
