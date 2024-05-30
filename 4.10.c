#include<stdio.h>

int swap(int*,int*);
int swap(int num1,int num2)
{
printf("The values of num1 and num2 before swapping:");
scanf("%d%d",&num1&num2);
int *ptr1=&num1;
int *ptr2=&num2;
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
return swap;
}
int main()
{
int res=swap(34,98);
return 0;
}

