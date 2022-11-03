#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    ptr = ("amit.txt","w");
    if(ptr==NULL)
    printf("file does not exist");
    else
    printf("file opened in write mode");
}