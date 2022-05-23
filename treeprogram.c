 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
   int data;
   struct node *left,*right;
 };   
 struct node* create()
 {
   int d;
   struct node *new;
   new=malloc(sizeof(struct node));
   printf("\nEnter the data (-1 for no node)");
   scanf("%d",&d);
   if(d==-1)
   {
     return NULL;
   }
   new->data=d;
   printf("\nEnter the left child of %d",d);
   new->left=create();
   printf("\nEnter the right child of %d",d);
   new->right=create();
   return new;
 }
 void preorder(struct node *root)
 {
   if(root==NULL)
   {
     printf("\n1^\n");
     return;
   }
   printf("%d \t",root->data);
   preorder(root->left);
   preorder(root->right);
 }
 void inorder(struct node *root)
 {
    if(root==NULL)
    {
      printf("\n2^\n");
      return;
    }
    inorder(root->left);
    printf("%d \t",root->data);
    inorder(root->right);
 }
 void postorder(struct node *root)
 {
    if(root==NULL)
    {
      printf("\n3^\n");
      return;
    }
    inorder(root->left);
    inorder(root->right);
    printf("%d \t",root->data);
 }
