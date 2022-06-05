#include<stdio.h>
#include<stdlib.h>
void insert(int item);
void traverse();
#define SIZE 100
int a[SIZE],n=-1;
int main()
{
  int d;
  do
  {
    printf("Enter the element(-1 for stop):\n");
    scanf("%d",&d);
    if(d!=-1)
    {
      insert(d);
    }
  }while(d!=-1);
  traverse();
}
void insert(int item)
{
  int i,p,temp;
  if(n > SIZE)
  {
    printf("Overloaded\n");
    exit(1);
  }
  n++;
  a[n]=item;
  i=n;
  p=(i-1)/2;
  while(p>=0 && a[p] < a[i])
  {
    temp=a[i];
    a[i]=a[p];
    a[p]=temp;
    i=p;
    p=(p-1)/2;
  }
}
void traverse()
{
  int i;
  for(i=0;i<=n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n");
}
