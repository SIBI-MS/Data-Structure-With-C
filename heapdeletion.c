#include<stdio.h>
#include<stdlib.h>
int dlt();
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
  printf("Before dlt:");
  traverse(n);
  n=dlt();
  printf("\nAfter dlt(Root):");
  traverse(n);
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
int dlt()
{
  int i=0,temp;
  a[i]=a[n];
  for(i=0;i<=n-1;i++)
  {
    if(a[2*i+1]>a[2*i+2] && a[2*i+1]!='\0' && a[2*i+2]!='\0' &&  a[i]<=a[2*i+1])
    {
      temp=a[i];
      a[i]=a[2*i+1];
      a[2*i+1]=temp;
    }
    else if(a[2*i+1]<a[2*i+2] && a[2*i+1]!='\0' && a[2*i+2]!='\0' && a[i]<=a[2*i+2])
    {
      temp=a[i];
      a[i]=a[2*i+2];
      a[2*i+2]=temp;
    }
    else if(a[2*i+1]>a[i] && a[2*i+2]=='\0')
    {
      temp=a[i];
      a[i]=a[2*i+1];
      a[2*i+1]=temp;
    }
   }
  return n-1;
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
