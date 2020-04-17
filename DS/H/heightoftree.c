#include<stdio.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;

}Node;
Node *create()
{
	int x;
	Node *newnode=(Node *)malloc(sizeof(Node));
	printf("Enter data for node(-1 for no data)\n");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("Enter the left child of node rooted at %d\n", newnode->data);
	newnode->left=create();
	printf("Enter the right child of node rooted at %d\n", newnode->data);
	newnode->right=create();
	return(newnode);
}
void traverse(Node *t)
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
int H(Node *t)
{
	int I,r,max;
	if(!t)
	{
		return 0;
	}
	else if(!(t->left)&& !(t->right))
	{
		return 0;

	}
	else
		I=H(t->left);
	r=H(t->right);
	int p=I>r?I:r;
	printf("the height is %d\n",p );
	return(1+p);
}
int main()
{
	int height;
	Node *root=create();
	printf("root child is %d\n",root->data );
	traverse(root);
	height=H(root);
	printf("the height is %d\n",height );
	return 0;
}