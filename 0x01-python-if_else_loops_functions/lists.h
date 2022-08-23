#include <stddef.h>
#ifndef LISTS_H
#define LISTS_H
/**
*  * struct listint_s - singly linked list
*   * @n: integer
*    * @next: points to the next node
*     *
*      * Description: singly linked list node structure
*       * for Holberton project
*        */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_s;
size_t print_listint(const listint_s *h);
listint_s *add_nodeint_end(listint_s **head, const int n);
void free_listint(listint_s *head);
listint_s *insert_node(listint_s **head, int number);
#endif /* LISTS_H */
