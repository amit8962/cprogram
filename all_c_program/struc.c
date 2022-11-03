#include<stdio.h>
#include<conio.h>
#pragma pack(1)

struct amit
{
    int a;
    char c;
};


int main()
{
  struct amit d = {1,'a'};
  printf("%d\n%c,",d.a,d.c);
  
}