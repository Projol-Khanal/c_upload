// WAP in C to find the sum of factorials of first n natural numbers.

#include<stdio.h>
int main()
{
    int n,i,sum=0,fact=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("Sum of factorial is: %d",sum);
    return 0;
}