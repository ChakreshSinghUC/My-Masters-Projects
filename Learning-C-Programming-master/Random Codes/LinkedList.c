#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int value;
	struct	node* next;
} Node;
Node* start = NULL;
Node* createnode(int a)
{
	Node* temp =
		(Node*)malloc(sizeof (Node));
	temp->value = a;  //assign value
	temp->next = NULL; //dereference
	return temp;
}
void insert(int m)
{	
	Node* t;
	Node* ptr = createnode(m);

	t = start;

	ptr->next = t; //the inserted node points to the address pointed by start before it.
	start = ptr; //Start points to the address of the inserted node.	
}
void printll()
{
	Node* p;

	p = start;
	printf("\n START -> ");
	while(p != NULL)
	{
		printf("%d -> ", p->value);
		p= p->next;
	}
	printf("END");
}
int main()
{
	Node* createnode(int);
	void insert(int);
	void printll();
	char ch;
	int n;
	do{
		printf("\n Enter value: ");
		scanf("%d", &n);
		insert(n); //Insert new node to the Linked List
		ch = getchar();
		printf("Insert more (y/n)? ");
		ch = getchar();
//		putchar(ch);
	}while(ch == 'y' || ch =='Y');
printf("\n ---------------THE LINKED LIST IS--------------------\n");
	printll(); //Print the Linked List

printf("\n");

	return 0;
}


