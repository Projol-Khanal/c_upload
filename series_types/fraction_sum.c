// WAP in C to find the sum of fraction of n natural numbers using for loop.
#include <stdio.h>
int main()
{
    int n;
    float sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1.0/i);
    }
    printf("Sum of fraction of first %d natural numbers = %f", n, sum);
    return 0;
}
