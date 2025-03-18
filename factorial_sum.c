// WAP in C to calculate the 1!+2!+3!+4!+5!+............n!, and print sum of the series:
#include<stdio.h>
int main()
{
    int n,i,sum=0,fact=1;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fact=1;
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("Sum of the series is: %d",sum);
    return 0;

}
