//Write a C program to find 1's count in binary value of given integer number.
#include<stdio.h>
void main()
{
    int x,zero=0,one=0,i=0,j=0,count1=0;
    int binary[50];
    printf("please enter number:");
    scanf("%d",&x);
    while(x>0)
       {

            binary[i]=x%2;

            x=x/2;

            i++;
       }
   while (binary[count1] != '\0')
      {
        count1++;
      }
        
  for(i=count1-1;i>0;i++)  
     {
        printf("%d",binary[i]);
     }

   while(x>0)
    {
       if(x%2==0)
       {
         zero++;
       }
       else
       {
         one++;
       }
       x=x/2;
    }
    printf("%d",one);
}
