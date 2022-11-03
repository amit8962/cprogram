// in this program we will find the order of the no means that how many digit  number is  containing

#include<stdio.h>
#include<conio.h>

int main()
{

    int n;
    printf("enter the no :");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
}