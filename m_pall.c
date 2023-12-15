#include "monty.h"
/**
 * my_pall - prints my stack
 * @head: stack head
 * @count: none used
 * Return: none returned
*/
void my_pall(stack_t **head, unsigned int count)
{
	stack_t *hd;
	(void)count;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
