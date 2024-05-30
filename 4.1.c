//factorial using functions
#include<stdio.h>
int fact(int);
int main()
   {
     int num;
     int res = fact(5);
     printf("factorial= %d \n",res);
     return 0;
   }
  
  
int fact(int num)
  {
    int fact=1,i;
       for(i=1;i<=num;i++)
         {
            fact=fact*i;
         }
  return fact;
  }
