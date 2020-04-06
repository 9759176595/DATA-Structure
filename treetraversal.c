#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
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
void traverse(node *t)
{
	if(!t==NULL)
	{
		printf("left child data is %d\n",t->data );
		traverse(t->left);
		t=t->right;
	}
	if(!t==NULL)
	{
		printf("right child data is %d\n",t->data );
		traverse(t->right);
	}
}
// void inorder(node *t)
// {
// 	if(t)
// 	{
// 		inorder(t->left);
// 		printf("%d\n",t->data );
// 		inorder(t->right);
// 	}
// }
// void preorder(node *t)
// {
// 	if(t)
// 	{
// 		printf("%d\n",t->data );
// 		preorder(t->left);
// 		preorder(t->right);
// 	}
// }
void postorder(node *t)
{
	if(t)
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d\n",t->data );
	}
}
int main()
{
	node *root=create();
	node *t=root;
	printf("root child is %d\n",t->data );
	traverse(t);
	//inorder(t);
	//preorder(t);
	postorder(t);
	printf("is the order traversal\n");
	return 0;
}