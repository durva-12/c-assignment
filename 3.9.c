//print square star pattarn
#include<stdio.h>
int main()
{
    int i,j,num;
       printf("enter number of lines:");
       scanf("%d",&num);
          for(i=0;i<=num;i++)
             {
            for(j=0;j<=num;j++)
               {
                 printf("*");
               }
                 printf("\n");
             }
      return 0;
  }
