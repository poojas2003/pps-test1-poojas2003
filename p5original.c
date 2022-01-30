#include<stdio.h>
void cmp(int a,int b,int c,int *large)
{
if(a>b && a>c)
*large=a;
else if(b>c)
*large=b;
else
*large=c;
}
void input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d %d %d" ,a,b,c);
}
 int main()
 {
   int a,b,c,large;
    input (&a,&b,&c);
    cmp(a,b,c,&large);
    printf("%d is large of all three numbers\n",large);
    return 0;
 }