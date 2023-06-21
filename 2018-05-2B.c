#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define e M_E
int main ()
{
double a=0.0, b=0.0, c, d, I=0.0, N=0.0, x, y;

printf("Give a,b,N\n");
scanf("%lf %lf %lf", &a, &b, &N);

c=N/1000;
d=(b-a)/1000;

for (x=0; x<=N; x+=c)
	{
	for (y=a; y<=b; y+=d)
		{
		I+=c*d*pow(e, -x*tan(y));
		};
	};
FILE *fp;
fp=fopen("arxei.dat", "w");
fprintf(fp, "%lf, %lf, %lf, %lf", a, b, N, I);
fclose(fp);
}
