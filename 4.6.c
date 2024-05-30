#include<stdio.h>
   int fibo(int,int);
   int fibo(int i,int n)
   {
   
     int t0=0,t1=1;
   
     int nextterm=t0+t1;
	 printf("enter no:");
	 scanf("%d",&n);

     printf("fibonaci series is %d,%d",t0,t1);
    for(i=3;i<=n;i++)
    {
    printf("%d,",nextterm);
      t0=t1;
      t1=nextterm;
      nextterm=t0+t1;
  }
     return fibo;
     }
  
     int main()
     {
     int res=fibo(3,10);
   return 0;
}
