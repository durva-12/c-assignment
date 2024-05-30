#include<stdio.h>
  2 int prime(int n)
  3 {
  4  int flag=1;
  5  for(int i=2;i<=n/i;i++)
  6  {
  7  if(n/i==0)
  8   flag=0;
  9   break;
 10   }
 11  if(flag)
 12   printf("%d is a prime number\n",n);
 13  else
 14  if(!flag)
 15  printf("%d is not a prime number\n",n);
 16  return prime;
 17  }
 18  int main()
 19  {
 20  int res1=prime(5);
 21  int res2=prime(41);
 22 int res3=prime(54);
return 0;
 25  }
        
