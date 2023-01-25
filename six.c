/*Write a C program that expands given short norm to expanded string. e.g., if passed string is "a-g" output
 should be "abcdefg" if passed string is "b-h4-8" output should be "bcdefgh45678" if passed string is "-c-e-" output should be "cde*/
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int value1,value2,l,i,j;
    printf("please add:");
    scanf("%s",&a);
    l=strlen(a);
    
   
    if(a[0] != 45)
    {
        for(i=0;i<l;i++)
        {
            if(a[i] == 45)
            {
                value1 = a[i-1];
                value2 = a[i+1];
           
               for(j = value1; j<=value2 ;j++)
                   {
                printf("%c", j);
                 }
            }     

        }
       
   }
   else
   {
         for(int i = 1; i<l; i++)
        {
            if(a[i] == 45)
            {
            value1 = a[i-1];
            value2 = a[i+1];
            
                


         for(int j = value1; j<=value2; j++)
        {
                printf("%c", j);
        }
            }
        }    
            
            
    }
   
   
}