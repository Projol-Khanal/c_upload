// WAP in C to find the sum of n natural numbers using for loop.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}

