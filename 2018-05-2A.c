#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define e M_E
int main ()
{
double a, b, c, I, N, n, x;

printf("Give a, b, N\n");
scanf("%lf \n%lf \n%lf", &a, &b, &N);

c=(b-a)/1000;

for (n=0; n<=N; n++)
	{
	for (x=a; x<=b; x+=c)
		{
		I+=pow(e, -n*tan(x));
		};
	};
printf("\n%lf, %lf, %lf, %lf", a, b, N, I);
FILE *fp;
fp=fopen("arxeio.dat", "w");
fprintf(fp, "%lf, %lf, %lf, %lf", a, b, N, I);
fclose(fp);
}

