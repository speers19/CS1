#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()

{
double n;
double nn;
double max;
double min;
double range;
double count = 0;

printf("Throw some numbers in homie\n");

while(n>-1)
{
if(n>nn)
	{
	if(n>max)
		{max=n;}
	}

if (n<nn)
	{
	if(n<min)
		{min=n;}
	}
nn=n;
scanf("%lf",&n);
count++;
if(count==1)
{max=n;
min=n;
}
}

range=max-min;

printf("The range is %lf\n",range);

}
