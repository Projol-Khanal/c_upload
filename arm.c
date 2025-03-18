// to check whether the given no is armstrong or not

# include<stdio.h>
int main()
{
    int a,n,r=0,s=0;
    printf("enter a number: ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==a)
    {
        printf(" the number is armstrong:");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}