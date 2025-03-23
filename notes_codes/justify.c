// Write a suitable program to print 98520.2783 into the formats: 0000098520.2783, 98520.27 and left justified, 98520.278 and right justified.
# include<stdio.h>

int main()
{
    double num = 98520.2783;
    printf("%010.4f\n",num);  // 0000098520.278
    printf("%09.2f\n",num);  // 98520.27
    printf("%-9.3f\n",num);  // 98520.278
    printf("%09.3f\n",num);  //  98520.278
    return 0;
    
}