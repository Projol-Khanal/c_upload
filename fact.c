// Program to calculate factorial using recursive function

#include<stdio.h>
int main()
{
    int fact(int);
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;

}
int fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}
