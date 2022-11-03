// we are writing the program to to check wheater it is a armstrong  no. or not??

#include<stdio.h>
#include<conio.h>

int main()
{

    int  n,r,q;
    int count=0;

    printf("enter the no :");
    scanf("%d",&n);
    int no_ = n;
    int  new_n;
    new_n = n;

    while(n != 0)
    {
        n=n/10;
        count++;

    }

    //printf("%d",count);
    int cnt ;
    cnt=count;
    int  result;
    int mul=1;


    while (new_n != 0)
    {
        new_n=new_n%10;
        while(cnt!=0)
        {
            
            mul=mul*new_n;
            cnt--;



        }
        result=result+mul;
        cnt=count;
        mul=1;
        new_n=new_n/10;
    }

    if (no_ == result)
    {
        printf("this is a armstrong no ");
    }
    else
    {
        printf("this is not a armstrong no.");
    }
}
    
    