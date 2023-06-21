#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
int n=-1; 
while (n<0)
	{
	printf("Give natural n\n");
	scanf("%d", &n);
	}; 
double a[n];
while (a[0]<=1)
	{
	printf("Give a[0]>1\n");
	scanf("%lf", &a[0]);
	};

a[n]=1/tan((a[n-1] +tan(n))/sqrt(1+a[n-1]));

printf("%d \n%lf \n%lf", n, a[0], a[n]);
FILE *fp;
fp=fopen("them1B.dat", "w");
fprintf(fp, "%d \n%lf \n%lf", n, a[0], a[n]);
fclose(fp);
}
