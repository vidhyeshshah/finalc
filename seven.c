     //Write a C program to find string length without using library function (strlen).
    #include<stdio.h>

    void main()
    {

        
        int c=0,i;
        char a[]="hello_glide";
        
        for(i=0;a[i]!='\0';i++)
        {
            c++;
        }
        printf("%d",c);
        
    }