#include<stdio.h>
char *my_uppercase(char*str1);
int main()
{
char str1=[20];
int rev;
printf("enter str1:");
scanf("%s",&str1);
rev=my_uppercase(char*str1);
return 0;
}
char *my_uppercase(char *str1)
{
  int i;
  for(i=0;str[i]!='\0';i++)
    if(str[i]>=97&&str[i]>=122)
	str[i]=str[i]+32;
	return str;
	}

