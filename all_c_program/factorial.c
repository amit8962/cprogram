#include<stdio.h>
#include<conio.h>

int main()
{   
    int n,i;
    printf("enter the no :");
    scanf("%d",&n);
    int mul=1;




    for ( i = n ; i != 0; i--)
    {
        mul=mul*i;
    }

    printf("%d",mul);
    
}