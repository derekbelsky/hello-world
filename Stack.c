/* This program is a simple stack
   A linked list struct is made and the associated methods
   pop and push are used to add and delete from the beginning
   of the list. 
*/

#include "stdio.h"

void push(int data);
int pop();

struct node
{
	int data;
	struct node *next;
};

struct node *head;

int main(int argc, char** argv)
{
	int d;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 0;
	head->next = NULL;
	push(1);
	push(2);
	push(3);
	push(4);
	d = pop(4);

	
	printf("%d", d); // Should be 4
	printf("%d", head->data); //Should be 3

	//_getch(); //for VS 
	return 0;
}

void push(int data)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = head;
	head = temp;
	// Not sure if memory had to be freed here.
}

int pop()
{
	struct node *old_head = head;
	int data = old_head->data;
	head = head->next;
	free(old_head); 
	return data;
}

