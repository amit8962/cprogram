#include<stdio.h>
#include<conio.h>
void print(char []);//here we are declaring the funtion

int main()
{    
    char str[10];
    printf("enter the string:");
    scanf("%s",&str);
    printf(str);//here we are calling a funtion
}

void print(char  str[])//here is the funtion declaration
{
    printf("%s",str);
}