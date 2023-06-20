#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
double a,b,c,d,f,g,h,i,I,j,k,x,y;
FILE *fp;
fp=fopen("thema2A.dat","w");
do
	{
	printf("Give a,b,c,d\n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	}
while (a<=1 || b<=a || c<=b || d<=c);

f=(b-a)/1000;
g=(d-c)/1000;
I=0.;
x=a;
y=c;

for (h=0;h<1001;h++)
	{
	for (i=0;i<1001;i++)
		{
		I=exp((-2*pow(x,2)-pow(a*c,1/2.))/(pow(y,1/3.)+2*b*d));
		y+=g;
		};
	x+=f;
	};
printf("%lf \n%lf \n%lf \n%lf \n%lf", a, b, c, d, I);
fprintf(fp,"%lf \n%lf \n%lf \n%lf \n%lf", a, b, c, d, I);
}
