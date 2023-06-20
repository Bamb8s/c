#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
FILE* fp;
int n;
double a[n];

fp=fopen("thema1A.dat", "w");

do
	{
	printf("Give n>=3\t");
	scanf("%d", &n);
	}
while (n<3);
do 
	{
	printf("Give 1<a[0]<5\t");
	scanf("%lf", &a[0]);
	}
while (a[0]<=1.0 || a[0]>=5.0);
do
	{
	printf("Give 1<a[1]<5\t");
	scanf("%lf", &a[1]);
	}
while (a[1]<=1.0 || a[1]>=5.0);
do 
	{
	printf("Give 1<a[2]<5\t");
	scanf("%lf", &a[2]);	
	}
while (a[2]<=1.0 || a[2]>=5.0);

a[n]=2*pow(a[n-1],1/4.0)-pow(a[n-2],1/3.0)+2*pow(a[n-3],2)+2*pow((n+6),1/2.0);

printf("%d \n%lf \n%lf \n%lf \n%lf", n, a[0], a[1], a[2], a[n]);
fprintf(fp, "%d \n%lf \n%lf \n%lf \n%lf", n, a[0], a[1], a[2], a[n]);
}
