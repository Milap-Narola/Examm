#include<stdio.h>


int main ()
{
    int n;

    printf("Enter Any Number :");
    scanf("%d",&n);


    if (n>0)
    {
        printf("\n\nThe Number Is Positive\n");
    }
    else if (n<0)
    {
        printf("\n\nThe Number Is Nagative\n");
    }
    else if(n==0)
    {
        printf("\n\nNumber Is Neatural\n");
    }
    
return 0;    

}