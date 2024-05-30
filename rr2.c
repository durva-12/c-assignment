#include<stdio.h>
int main()
{ 
int *arr[4];
int p1=30,p2=31,p3=32,p4=33;
arr[0]=&p1;
arr[1]=&p2;
arr[2]=&p3;
arr[3]=&p4;
printf("BASE ADDERWSS OF ARRAY IS:%u\n",arr);
for(int i=0;i<=4;i++)

printf("%u\n",arr[i]);
printf("\n");
for(int i=0;i<=4;i++)
  
  printf("%u\n",*(arr+i));
  
  
  printf("\n");

printf("\n");
printf("the elements of array:");
for(int i=0;i<=4;i++)
 
for(int i=0;i<=4;i++)
 12 
 13 printf("%u\n",arr[i]);
 14 
 15 
 16 printf("\n");
  printf("%u\n",**(arr+i));
 
 
  printf("\n");

return 0;
}
