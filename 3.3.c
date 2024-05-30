//wap to make sum of digit in number
#include<stdio.h>
int main()
 {
 int num;
 int sum,rem;
    printf("enter the number:");
    scanf("%if",&num);
        while(num!=0)
      {
         rem = num % 10;
         sum = sum + rem;
         num = num / 10;
      }
  printf("the sum of digits of given number is :%d\n",sum);
  return 0;
  }

