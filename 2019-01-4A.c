#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n=1;
double I; 
I=(5.+4*pow(3.14159,2.))*cos(0.5*3.14159);

printf("I(%d)=%lf\n",n,I);

for (n=2;4.*pow(3.14159*n,-2.)>=0.000001;n++)
	{
	I*=(5.+4.*pow(3.14159*n,-2.))*cos(0.5*3.14159*pow(n,-1.));

	printf("I(%d)=%lf\n",n,I);
	};
}
