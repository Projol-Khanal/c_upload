#include<stdio.h>
int main()
{
    float c;
    printf("enter the temperature in degeree celcius: ");
    scanf("%f",&c);
    float f=(9*c)/5+32;
    printf("the temperature in degree fahrenheit is %f",f);
    return 0;
}