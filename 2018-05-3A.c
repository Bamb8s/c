#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
double n, m, y=0.;
int i, N, M, z[i];

printf("Give natural numbers N, M>0\n");
scanf("%lf %lf", &n, &m);

N=(int)floor(n);
M=(int)floor(m);

while (n!=N || N<0)
	{
	printf("Give natural number N\n");
	scanf("%lf", &n);
	N=(int)floor(n);
	};
while (m!=M || M<=0)
	{
	printf("Give non-zero natural number M\n");
	scanf("%lf", &m);
	M=(int)floor(m);
	};

for (i=1; i<=N; i++)
	{
	y+=tan((rand()%(M+1))/M);
	}
printf("%lf", y);
}
