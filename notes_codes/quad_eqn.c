#include<stdio.h>
#include<math.h>
int main()

{
    float a,b,c,r1,r2,real,imag;
    printf("enter the values of a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    float d=b*b-4*a*c;

    if(d==0)
    {
        printf("the roots are real and equal:\n");
        r1=(-b)/(2*a);
        r2=(-b)/(2*a);
        printf("the roots are r1 = %f and r2 = %f",r1,r2);

    }

    else if(d>0)
    {
        printf("the roots are real and distinct:\n"); 
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        printf("the roots are r1 = %f and r2 = %f",r1,r2);

    }
    else
    {
        printf("roots are imaginary\n");
        float real= -b/(2*a);
        float imag=(sqrt(-d))/(2*a);
        printf("r1=%f+%fi\n",real,imag);
        printf("r2=%f-%fi\n",real,imag);
    }
    return 0;  

}
