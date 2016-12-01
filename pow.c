#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
double a;
double n;
double o;

printf("Please input a base and an exponent.\n");
scanf("%lf",&a);
scanf("%lf",&n);

if(a==0&&n<=0)
{
printf("Your answer is undefined\n");
}

else if(n<0)
{
n=-n;
o=1/(pow(a,n));
printf("Your answer is %lf\n",o);
}

else
{
o=pow(a,n);
printf("Your answer is %lf\n",o);
}

}