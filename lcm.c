// WAP a program in C to find LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,i,lcm;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=1; i<=a*b; i++)
    {
    if(i%a==0 && i%b==0)
    {
    lcm=i;
    
    }
    }
   
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
            
}            