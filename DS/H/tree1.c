#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node *create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data or -1 for no data\n");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	else
	{
		newnode->data=x;
		printf("Enter left child of %d\n",x );
		newnode->left=create();
		printf("Enter right child of %d\n",x );
		newnode->right=create();
		return newnode;
	}
}
void main()
{
	struct node *root;
	root=0;
	root=create();
}