//wap to print tables from 3 to 6 by using nested for loop
#include<stdio.h>
int main()
   {
     int i,j;
       for(i=3;i<=6;i++)
         {
           for(j=1;j<=10;j++)
             { 
             printf("%d*%d=%d\n",i,j,i*j);
             }
             printf("\n");
         }
 return 0;
   }

