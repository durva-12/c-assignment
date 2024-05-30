  3 #include<stdio.h>
  2 int pascal(int n)
  3 {
{
  4    for(int l1=1;l1<=n;l1++)
  5     {
  6       for(int space=1;space<=n-l1;space++)
  7       {
  8       printf("  ");
  9       int c=1;
 10         for(int i=1;i<=l1;i++)
 11         {
 12         printf("%4d",c);
 13     c=c*(l1-i)/i;
 14     }
 15         printf("\n");
 16         }
 17         }
 18         return pascal;
 19         }
 20 int main()
 21 {
 22  int n=5;
 23  pascal(n);
 24  return 0;
 25  }

