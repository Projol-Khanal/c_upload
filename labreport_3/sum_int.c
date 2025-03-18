// WAP to enter a non -negative integer and print the sum of its digits using do -while loop.
#include<stdio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    do
    {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;
    }
    while (n != 0);
    printf("Sum of digits is: %d", sum);
    return 0;
}   
