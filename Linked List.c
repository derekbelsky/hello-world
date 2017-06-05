/*
 ============================================================================
 Name        : Linked.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : LinkedList.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Simple struct for Linked List

//void addToList(struct node *head, int data);

struct node
{
	int data;
	struct node *next;
};


// Make a linked list that looks like:
//  ---        ---       ---        ---       ---
// | 4 |--->  | 3 |---> | 2 |--->  | 1 |---> | 0 |---> NULL
//  ---        ---       ---        ---       ---



int main(void)
{
	struct node *head;
	head = (struct node*)malloc(sizeof(struct node));
	// One node that is NULL
	// Pointer to a node so you'll have
	// -> instead of just the dot

	// initialize enough memory for the head
	// memory needs the size of one node structure
	// typecast to a struct node*

    head-> data = 0;
    head-> next =NULL;

	addToList(&head, 1);
	addToList(&head, 2);
	addToList(&head, 3);
	addToList(&head, 4);

	printf("%d", head->data);
    // Not sure if memory has to be freed somewhere.

	return EXIT_SUCCESS;
}

void addToList(struct node **head, int data)
{
	struct node *temp = NULL;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = *head;
	*head  = temp;

}
