#include<stdio.h>
  2 int fibo(int);
  3 int fibo(int n)
  4 {
  5 
  6   int t0=0,t1=1;
  7 
  8   int nextterm=t0+t1;
  9   printf("fibonaci series is %d,%d",t0,t1);
 10   
 11   
 12   printf("%d,",nextterm);
 13     t0=t1;
 14     t1=nextterm;
 15     nextterm=t0+t1;
 16 
 17    return fibo;
 18    }
 19 
 20    int main()
 21    {
 22    int res=fibo(10);
 23   return 0;}
