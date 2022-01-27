#include<stdio.h>
int main()
{
   int i, n, sum=0;

   printf("enter the number\n");
   scanf("%d",&n);      //i=5

  for(i=0; i<n; i++)
    {
      sum=sum + i;
    }

    printf("%d\n",sum);
    return 0;
}