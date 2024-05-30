//wap to print table by using for loop
#include<stdio.h>
int main()
{
    int num,i;
         printf("enter a number for printing table:");
         scanf("%d",&num);
       for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",num,i,num*i);
    return 0;
}

