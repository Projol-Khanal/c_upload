// WAP a program in C to find HCF and LCM both of any two numbers.
#include<stdio.h>
int main()
{
    int a, b, hcf,min,lcm;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    min=(a<b)?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
        hcf=i;
        }
    }
    lcm=(a*b)/hcf;
    printf("HCF of %d and %d is %d", a, b, hcf);
    printf("\nLCM of %d and %d is %d", a, b,lcm);
    

    return 0;
}
    