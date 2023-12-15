#include "monty.h"
/**
 * my_add - adds the top two elements of the stack.
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void my_add(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int length = 0, vab;

	h = *hd;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	vab = h->n + h->next->n;
	h->next->n = vab;
	*hd = h->next;
	free(h);
}

/**
 * my_addnode - add node to the head stack
 * @hd: head of the stack
 * @n: new_value
 * Return: no return
*/
void my_addnode(stack_t **hd, int n)
{

	stack_t *new_node, *vab;

	vab = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (vab)
		vab->prev = new_node;
	new_node->n = n;
	new_node->next = *hd;
	new_node->prev = NULL;
	*hd = new_node;
}
