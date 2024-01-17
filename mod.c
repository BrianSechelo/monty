#include "monty.h"
/**
 * f_mod - modulus
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sus, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
if (aux->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
sus = aux->next->n % aux->n;
aux->next->n = sus;
*head = aux->next;
free(aux);
}
