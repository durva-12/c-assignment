//wap to swap two numbers using for loop
#include<stdio.h>
int main()
 {
   int i,a=0,b=1,temp=0,count;
     printf("enter the values for  num:");
     scanf("%d",&count);
         for(i=1;i<=count;i++)
           {
            temp=a+b;
            printf("%d,",temp);
            a=b;
            b=temp;
            temp=a+b;
           }
  
  return 0;
 }
 
