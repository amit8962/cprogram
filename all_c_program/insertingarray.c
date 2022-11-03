#include<stdio.h>
#include<conio.h>

int main()
{    
    int i;
    int num,pos,size;
    int arr[5]={1,2,3,4,5};
     printf("enter the no.u want  to insert");
    scanf("%d",&num);
    printf("enter the position");
    scanf("%d",&pos); 
    size= sizeof(arr)/4;
    //printf("%d",size);


    for (i = size-1; i <= pos-1 ; i++)
    {
        arr[i+1]=arr[i];
    }
    
    

    arr[pos-1] = num;
    size++;


    for ( i = 0; i < size; i++)
    {
        printf("  %d,",arr[i]);
    }
    
    

    

}