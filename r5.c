#include<stdio.h>
char *my_uprcase(str);
//char *my_lowecase(*str);
int main()
{
char *str [79];
int rem1;
printf("enter a string:");
scanf("%s",&str);

rem1=my_uprcase(str);
//rem2=my_lowecase(*str);
printf("%s",rem1);
//printf("%s",rem2);
return 0;
}
char*my_uprcase(str)
{

for(int i=1;str[i]!='/0';i++)
if(str [i]>97 && str [i]<122)
{
  str [i]=str [i]-32;
  }
  return str;
}



