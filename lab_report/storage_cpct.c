#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    long double ld;
    printf("the storage capacity of int,float,char,double and long double is: %d %d %d %d %d",sizeof(i),sizeof(f),sizeof(c),sizeof(d),sizeof(ld));
    return 0;
}