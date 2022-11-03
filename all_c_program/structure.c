//here we are defining the user defined data type that is structure\

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct structure
{
    int a;
    char c;
    char arr[10];
};

int main()
{
    struct structure s1;

    s1.a =1;
    s1.c = 'm';
    strcpy(s1.arr,"amit");//note we can only copy the str we do not drictly assign


    //now we are printing all the values here which we have defined
    
    printf("\n%d",s1.a);
    printf("\n%c",s1.c);
    printf("\n%s",s1.arr);
}  







