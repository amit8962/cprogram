#include<stdio.h>
#include<conio.h>

int main()
{
    int n,q,r;
    int result=0;

    printf("enter the no : ");
    scanf("%d",&n);
    q=n;

    while (q!=0)
    {
        r=q%10;
        result= result*10 + r;
        q=q/10;

    }

    printf("reversed no is : %d",result);

    if (n==result)
    {
        printf("\n the number  is palandrome");
    }
    else{
        printf("\n number is not a palandrome");
    }

    return 0;
    
}