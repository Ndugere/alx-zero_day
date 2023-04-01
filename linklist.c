#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int number;
	struct node *next;
}
node;
int main(void)
{
	// creating the list
	node *list = NULL;
	// add a number to list
	node *n = malloc(sizeof(node));
	if (n == NULL)
	{
		printf("no enough memory space");
		return 1;
	}
	n->number = 1;
	n->next = NULL;
	//UPDATE LIST TO POINT TO NEW NODE
	list = n;
	// add a number to the list
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		printf("NO ENOUGH MEMORY SPACE");
		free(n);
		return 1;
	}
	n->number = 2;
	n->next = NULL;
	list->next = n;
	// adding a nother number to list
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		printf("there is no enough memory here");
		free(list->next);
		free(n);
		return 1;
	}
	n->number = 3;
	n->next = NULL;
	list->next->next = n;
	for (node *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%i\n", tmp->number);
	}
	while (list != NULL)
	{
		node *tmp = list-> next;
		free(list);
		list = tmp;
	}
	return 0;
}
	

