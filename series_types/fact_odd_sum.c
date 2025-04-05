// WAP in C to find the sum of factorials of first n odd natural numbers.
#include <stdio.h>
#include <math.h>
int main() 
{
    int n, i, sum = 0 ;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int count=0;
    for (i = 1; count< n; i=i+2) 
    {
        
        int fact = 1;   
        for (int j = 1; j <= i; j++)
        {
            fact =fact * j;
        }
        sum = sum +fact;
        count++;
    }
    printf("Sum of factorials is: %d", sum);
    return 0;
}