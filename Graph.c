/*
This is an example of an adjency graph.
This is only the making of the graph
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};


struct graph
{
	int vertix;
	struct node *edges;
};



int main(void) {
	int N;
	scanf("%d", &N);
	struct graph *G[N+1];
	int A[5];

	int i;
	for(i = 1; i<=N; i++)
	{
		G[i] = (struct graph *)malloc(sizeof(struct graph));
		G[i] -> vertix = i;
	    G[i] -> edges = NULL;
	}

	addEdge(G, 1, 2);
	addEdge(G, 1, 3);
	addEdge(G, 1, 4);
	addEdge(G, 1, 3);
	addEdge(G, 2, 1);
	addEdge(G, 2, 4);
	addEdge(G, 3, 1);
	addEdge(G, 4, 1);
	addEdge(G, 4, 2);



	return EXIT_SUCCESS;
}

void addEdge(struct graph *G[], int vertix, int neighbor)
{
	if(G[vertix] -> edges == NULL)
	{
		struct node *list;
		list = (struct node*)malloc(sizeof(struct node));
		list->data = neighbor;
		list -> next = NULL;
		G[vertix] -> edges = list;
	}
	else
	{
		struct node *temp;
		temp = (struct node*)malloc(sizeof(struct node));
		temp -> data = neighbor;
		temp -> next = G[vertix]->edges;
		G[vertix] ->edges = temp;
	}
}

