#include<stdio.h>
int main ()
{
  int i,num,fact=1;
     printf("enter a number:\n");
     scanf("%d",&num);
         for(i=1;i<=num;i++)
               fact=fact*i;
           printf("factorial=%d",fact);
return 0;
}

