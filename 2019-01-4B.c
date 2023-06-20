#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define p 3.1415927
int main ()
{
int n=1;
double I=5.0*p+0.5;

printf("I(%d)=%lf\n", n, I);
for (n=2; n<=100000; n++)
	{
	I*=pow (5*p+0.5/n, n*pow (-1, n+1));
	printf("I(%d)=%lf\n", n, I);
	}
}
