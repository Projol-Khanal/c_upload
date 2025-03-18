// WAP to perform the operations like addition, subtraction, multiplication and division on two numbers on the basis of user choice using switch case.
#include <stdio.h>
int main() 
{
    int a,b, choice, result;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) 
    {
    case 1:
        
    printf("Addition of %d and %d is %d", a, b, a+b);
    break;
    case 2:
    printf("Subtraction of %d and %d is %d", a, b, a-b);
    break;
    case 3:
    printf("Multiplication of %d and %d is %d", a, b, a*b);
    break;
    case 4:
    
    printf("Division of %d and %d is %d", a, b, a/b);
    break;
    default:
    printf("Invalid choice");
    }
    return 0;

    
}
    
