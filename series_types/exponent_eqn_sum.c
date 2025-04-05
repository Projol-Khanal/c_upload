#include <stdio.h>
#include<math.h>
int main()
{
    int x;
    float sum = 1.0,fact=1.0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        fact=fact*i;
        sum = sum + (pow(x,i)/fact);
    }
    printf("Sum of exponential is = %f",sum);
    return 0;
}
