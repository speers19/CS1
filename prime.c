#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()

{
int n;
int d;
int noprime;

printf("Please input an integer.\n");
scanf("%d",&n);

if(n>1)
{
	for (d=2; d <= (n/2); d++)
		{
		noprime = 0;
		
		if (fmod(n,d) == 0)
			{
			noprime++;
			break;
			}
		}
		
	if (noprime == 1)
	{
	printf("%d is not a prime number.\n",n);
	}
	else
	{
	printf("%d is a prime number.\n",n);
	}
}
else if (n==1)
{
printf("1 is not a prime number.\n");
}
else
	{
	printf("Try again, chumpo.\n");
	}

}