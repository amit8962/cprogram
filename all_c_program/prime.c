#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,val,i;
    printf("enter the no:");
    scanf("%d",&n);

    val=ceil(sqrt(n));
    int count=0;
    int val2=n;

    //printf("%d",val);


    for ( i = 2; i <= val ; i++)
    {
        if (val2%i==0)
        {
            count=1;
        }
        
    }
    
    if((count == 0 && val2 !=1 )|| val2 ==2 ||val2 ==3)
    {
        printf("no is  prime");
    }
    else
    {printf("number is  not prime");}
}