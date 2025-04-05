#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0,fact=1.0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(1.0/fact);
    }
    printf("Sum of factorial is: %f",sum);
    return 0;
}