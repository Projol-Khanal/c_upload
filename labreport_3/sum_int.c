// WAP to enter a non -negative integer and print the sum of its digits using do -while loop.
#include<stdio.h>
int main()
{
    int n, sum = 0, r;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    do
    {
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    }
    while (n != 0);
    printf("Sum of digits is: %d", sum);
    return 0;
}   
