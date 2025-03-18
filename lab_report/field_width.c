
//  use of field width %ws format specifier

#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string: ");
    scanf("%[0-9 a-z A-Z]",str);
    printf("entered string is :%s",str);
    return 0;
}