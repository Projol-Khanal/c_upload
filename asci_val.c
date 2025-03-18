//  WAP in C to print ASCII values and characters from 48 to 55 and 65 to 70. Use continue statement for restricting the ASCII values and characters from 56 to 64.
#include<stdio.h>
int main()
{
    int i;
    for(i=48;i<=55;i++)
    {
        if(i==53)
        continue;
        printf("%d\t%c\n",i,i);
    }
        for(i=65;i<=70;i++)
        {
            if(i==67)
            continue;
            printf("%d\t%c\n",i,i);
        }
    return 0;

}