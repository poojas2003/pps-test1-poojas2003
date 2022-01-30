#include<stdio.h>
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
  return a;
  else if(b>c)
  return b;
  else
  return c; 
}
int input()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d",&a);
  return a;
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
   large=cmp(a,b,c);
  printf("%d is the large of three\n",large);
  return large;
}