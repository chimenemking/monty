#include "monty.h"
/**
 * my_pint - prints the top value of a stack and new line.
 * @hd: pointer to stack head
 * @count: represents line_number
 * Return: no return
*/
void my_pint(stack_t **hd, unsigned int count)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
