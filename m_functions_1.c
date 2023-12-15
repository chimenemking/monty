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
