// WAP to perform the operations like addition, subtraction, multiplication and division on two numbers on the basis of user choice using switch case.
#include <stdio.h>
// #include <conio.h>
int main() 
{
    int a,b,ch;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    printf("enter any of the operators among +,-,* and /: ");
    fflush(stdin);
    ch=getchar();
    switch (ch) 
    {
    case '+':
        
    printf("Sum of %d and %d is %d", a, b, a+b);
    break;

    case '-':
    printf("Difference of %d and %d is %d", a, b, a-b);
    break;
    case '*':
    printf("Product of %d and %d is %d", a, b, a*b);
    break;
    case '/':
    
    printf("Division of %d and %d is %d", a, b, a/b);
    break;
    default:
    printf("Invalid choice");
    }
    return 0;

    
}
    
