/*Write a C program to compare two strings (returns 0 on success and -1 on failure) 
Define above function in another c file instead of main source file. Make a Makefile to compile these c files.*/
#include<stdio.h>
int main()
{
    char a[100],b[100],count1=0,count2=0,flag=5;
    printf("please add string 1:");
    scanf("%s",a);
    printf("please add string 2;");
    scanf("%s",b);
     while (a[count1] != '\0')
        count1++;
    while (b[count2] != '\0')
        count2++;
    if(count1==count2)
       {    
          for(int i=0;i<count1;i++)
          {
             if(a[i]==b[i])
               {
                  flag=1;
               }
             else
              {
                 flag=0;
                 break;
              }
          }
        }  
    else{
        flag=0;
        }
    if(flag==1)
      {
        printf("strings are same");
      } 
   else if(flag==0)
      {
         printf("strings are different");

      }
      getchar();
}
