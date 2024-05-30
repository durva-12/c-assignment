#include<stdio.h>
#include<string.h>

int main()
{
	int arr[3]={1,2,3};

//int ptr1,ptr2,ptr3;
//    arr[0]=&ptr1;
//	arr[1]=&ptr2;
//	arr[2]=&ptr3;
	


   for(int i=0;i<=3;i++)
   printf("%u\n",arr[i]);


     for(int i=0;i<=3;i++)
     printf("%u\n",arr[i+1]);

/*     for(int i=0;i<=3;i++)
     printf("%u\n",*arr[i]);


      for(int i=0;i<=3;i++)
       printf("%u\n",*arr[i]+1);
 
*/
       for(int i=0;i<=3;i++)
       printf("%u\n",arr[i]+1);    

  /*    for(int i=0;i<=3;i++)
       printf("%u\n",**(arr+i));*/
	   return 0;
	   }
 
  
 


