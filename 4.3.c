//calculator
#include<stdio.h>
int cal(int,int);
int cal(int num1,int num2)
   {
     int ch;
       printf("enter choice:");
       scanf("%d",&ch);
          switch(ch)
            {
               case 1:printf("addition\n");
                   printf("addition is %d\n",num1+num2);
               break;
               case 2:printf("substraction\n");
                   printf("substraction is %d\n",num1-num2);
               break;
               case 3:printf("multiplication\n");
                   printf("multiplication is %d\n",num1*num2);
               break;
               case 4:printf("division\n");
                   printf("division is %d\n",num1/num2);
               break;
           }
 return cal;
   }
int main()
  {
     int num1=30,num2=3;
     printf("%d\n",cal(30,3);
);
return 0;
  }

