#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
FILE *fp;
double a, b, c=0., d, f, g, I, x, y;

fp=fopen("thema2B.dat", "w");
while (c<=1. || d<=c || a<=d || b<=a)
	{
	printf("Give a, b, c, d\n");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	};
	
I=0.;
f=(b-a)/100.;
g=(d-c)/100.;

for (x=a; x<=b; x+=f)
	{
	for (y=c; y<=d; y+=g)
		{
		I+=f*g*tan((2.*pow(x,2.)+sqrt(a/d))/(3.*pow(y,5.)+d/c));
		};
	};
fprintf(fp, "%lf, %lf, %lf, %lf, %lf", a, b, c, d, I);
fclose(fp);
}
