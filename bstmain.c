#include<stdio.h>
#include"bstprogram.c"
int main()
{
  struct tree *root=NULL;
  int d=0;
  do
  {
    if(d==0)
    {
      printf("Enter the root node:");
      scanf("%d",&d);
      root=creat(root,d);
    }
    printf("Enter the element of node(-1 for Stop)");
    scanf("%d",&d);
    if(d==-1)
    {
      break;
    }
    root=creat(root,d);
  }while(d!=-1);
  inorder(root);
	printf("\n");
}
