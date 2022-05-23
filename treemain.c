#include<stdio.h>
#include"treeprogram.c"
int main()
 {
   struct  node *root=NULL;
   root=create();
   preorder(root);
   inorder(root);
   postorder(root);
 }
