#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()

{

int n = 0; //integer inputs
int x[101]; //array of integers
int sb[101]; //scoreboard array
int k = 0; //accessor for array
int z = 0; //accessor for scoreboard array
int count = 0; //keeps track of how many inputs in first array
int max = 0; //the temporary mode
int mode;
int nomode = 0; 

printf("Throw some integers in, and terminate with a negative.\n");

while (0<=n && n<101) //creates initial array
{
	scanf("%d",&n);
	x[k] = n;
	k=k+1;
	count++;
}

/* printf("Your initial array is "); //print array
k=0;
while (k<(count-1))
{
	printf("%d ",x[k]);
	k++;
} 
printf("\n"); */

k=0;

for (z=0; z<101; z++) //creates second array
{
	while (k<(count-1))
	{
		if (x[k] == z)
		{
		sb[z]++;
		}
	k++;
	}
k=0;
}


z=0;

/* while (z<101) //prints second array 
	{
	printf("%d ",sb[z]);
	z++;
	} 
*/

for (z=0;z<101;z++) //finds the highest max of the set
{
	if (sb[z] > max)
		{
		max = sb[z];
		mode = z;
		}
}

for (z=0;z<101;z++)
{
	if (sb[z] == max)
	{
	nomode++;
	}
}



if (nomode > 1)
	{
	printf("There is no mode.");
	}
else
	{
	printf("The mode is %d.",mode);
	}


printf("\n");
}

