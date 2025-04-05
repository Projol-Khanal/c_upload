// WAP in C to print all the prime numbers below 100.
#include <stdio.h>
int main() 
{

    int i, j, n = 100;
    for (i = 2; i < n; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
             break;
            }
        }
        if (j > i / 2)
        printf("%d ", i);
    }
    return 0;
}

