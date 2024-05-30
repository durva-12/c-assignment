//wap to calculate power of base index
#include<stdio.h>
int main()
  {
   int base,power;
   int p=1;
     printf("enter values for base and power:");
     scanf("%d%d",&base,&power);
   for(int i=1;i<=power;i++)
       p=p*base;
       printf("%d",p);
  return 0;
  }

