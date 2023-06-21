#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
int M=0, n=20;
double y[n], z[n];

while (M<=0 || M>20)
	{
	printf("Give natural 0<M<=20\n");
	scanf("%d", &M);
	};
for (n=1; n<=M; n++)
	{
	z[n]=(rand() % 101);
	};
FILE *fp;
fp=fopen("randM.txt", "w");
for (n=1; n<=M; n++)
	{
	if (z[n]==0)
		{
		y[n]=1;
		}
	else
		{
		y[n]=z[n]/tan(z[n]);
		};
	fprintf(fp, "%lf\n", y[n]);
	};
fclose(fp);
}
