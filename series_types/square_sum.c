// WAP in C to find the sum of squares of n natural numbrs using for loop.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of squares of %d natural numbers is: %d", n, sum);
    return 0;
}