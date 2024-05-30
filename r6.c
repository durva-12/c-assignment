#include<stdio.h>
int main()
{
int n1=3,n2=6;
 swap(&n1,&n2);
 printf("%d,%d",n1,n2);
 return 0;
}
int swap(int *n1,int *n2)
{ 
   *n1=*n1^*n2;
   *n2=*n1^*n2;
   *n1=*n1^*n2;
}
