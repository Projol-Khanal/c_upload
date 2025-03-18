// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("enter the values of a,b,c and d: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    // use of arithmetic operator 
    printf("sum is: %d\n",a+b);
    printf("difference is: %d\n",a-b);
    printf("product is: %d\n",b*c);
    printf("division is: %f\n",(float)a/b);
    printf("modulus is: %d\n",d%b);
    
    // use of logical operator;
    printf("b>d && a>c: %d\n",(b>d)&&(a>c));
    printf("b>d || a>c: %d\n",(b>d)||(a>c));
    printf("NOT Operator: %d\n",!(a==10));
    
    // use of assignment operator
    printf("a=%d\n",a+=b);
    printf("a=%d\n",a-=b);
    printf("a=%d\n",a*=b);
    printf("a=%d\n",a/=b);
    printf("a=%d\n",a%=b);
    printf("a=%d",a=b);
    return 0;
}