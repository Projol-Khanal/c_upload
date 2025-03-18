// Online C compiler to run C program online

// program is still not fully completed
// still needed to change and improve somethings
#include <stdio.h>
#include <math.h>

int main() {
    // cos(x)
    int n,sign=-1,fact;
    float x, sum=1.0;
    printf("enter the value of angle x and no. of terms n upto which you want to find the sum: ");
    scanf("%f %d",&x,&n);
    x=(x*3.14)/180;
    for(int i=1;i<=n;i+=2)
    {
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+((sign*(-1)*pow(x,i))/fact);
        sign=sign*(-1);
        
        
    }
    printf("sum of series upto nth power is %f",sum);

    return 0;
}