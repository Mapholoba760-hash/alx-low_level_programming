#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list of space
 * @head: list_t list to be freed of space
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
