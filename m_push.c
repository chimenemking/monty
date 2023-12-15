#include "monty.h"
/**
 * my_push - adds a node to a stack.
 * @head: the stack head
 * @cnt: counter
 * Return: nothing
 */
void my_push(stack_t **head, unsigned int cnt)
{
	int m, k = 0, flg = 0;

	if (!bus.arg || bus.arg[0] == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (bus.arg[0] == '-')
	{
		k++;
	}
	for (; bus.arg[k] != '\0'; k++)
	{
		if (bus.arg[k] < '0' || bus.arg[k] > '9')
		{
			flg = 1;
			break;
		}
	}
	if (flg == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = atoi(bus.arg);
	if (bus.lifi == 0)
	{
		addnode(head, m);
	} else
	{
		add_queue(head, m);
	}

}
