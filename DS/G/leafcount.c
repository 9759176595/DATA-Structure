#include<stdio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int getleafCount(struct node *node)
{
	if(node==NULL)
	{
		return 0;
	}
	if(node->left==NULL && node->right==NULL)
		return 1;
	else
		return getleafCount(node->left)+getleafCount(node->right);
}
struct node *newnode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}

int main()
{
	struct node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(5);
	root->left->left=newnode(7);
	root->left->right=newnode(9);
	printf("leaf count of tree is %d\n",getleafCount(root) );
	return 0;
}