 //Write a C program to reverse the given number in most efficient way.
 #include<stdio.h>
void main()
{
    int x,r=0,sum=0;
    printf("please enter number:");
    scanf("%d",&x);
    {
        while(x>0)
        {
            r=x%10;
            sum=(sum*10)+r;
            x=x/10;
        }
    }
    printf("%d",sum);
}
