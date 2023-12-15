#include "monty.h"

/**
 * my_pop - This will Remove the top value element of a stack.
 * @hd: A pointer to the top mode stack_t.
 * @line_num: The current line.
 */
void my_pop(stack_t **hd, unsigned int line_num)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next;
	free(h);

}

/**
 * my_swap - adds the top two elements of the stack in monty.
 * @head: pointer to stack head
 * @count: line
 * Return: nothing here
*/
void my_swap(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int length = 0, element;

	h = *hd;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	element = h->n;
	h->n = h->next->n;
	h->next->n = element;
}
