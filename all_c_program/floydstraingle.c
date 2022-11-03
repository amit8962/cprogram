#include<stdio.h>
#include<conio.h>

int  main()


{
    //in this program we are printing the floyds traingle
    int a,n,i,j;
    printf("enter the no of rows");
    scanf("%d",&n);
    a=1;

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i ; j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
        
    }
    
}