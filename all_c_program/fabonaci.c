#include<stdio.h>
#include<conio.h>

int main()
{
  //we are printing the fabonaci series in this code//

  int n;
  printf("enter the no :");
  scanf("%d",&n);

  int a,b,i;
  int result=0;
  a=0;
  b=1;
  for ( i = 0; i < n; i++)
  {
    printf(" %d",a);
    result=a+b;
    a=b;
    b=result;


  }
  
}