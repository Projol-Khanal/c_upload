#include<stdio.h>
int main()
{
    int b;
    float c;
    printf("enter the value of b in integer and c in decimal format: ");
    scanf("%d %f",&b,&c);
    int sum=b+(int)c;           // use of typecatsing

    printf("the sum in integer format is %d",sum);

    // now printing the addresses

    printf("\naddress of b is: %p",&b);                         // to print hexadecimal values including zeros
    printf("\naddress of c is: %0x",&c);                       // to print hexadecimal values omitting zeros but in small letters only
    printf("\naddress of sum is: %0X",&sum);                   // to print hexadecimal values omitting zeros but in capital letters only


    return 0;
    
}