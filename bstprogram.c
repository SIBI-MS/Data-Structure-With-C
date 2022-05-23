#include<stdio.h>
#include<stdlib.h>
struct tree
{
  int data;
  struct tree *left,*right;
};
struct tree *creat(struct tree *temp,int d)
{
  struct tree *new;
  new=malloc(sizeof(struct tree));
  new->data=d;
  new->left=NULL;
  new->right=NULL;
  if(temp==NULL)
  {
    return new;
  }
  if(d<temp->data)
  {
    temp->left=creat(temp->left,d);
  }
  else
  {
    temp->right=creat(temp->right,d);
  }
  return temp;
}
void preorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}
void postorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
