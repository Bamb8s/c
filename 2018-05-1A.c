#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
int n;
double a[n];

a[0]=1.0;

printf("Give n\n");
scanf("%d", &n);
while (a[0]<=1.0)
	{
	printf("Give a[0]\n");
	scanf("%lf", &a[0]);
	};

a[n]=cos(sqrt(a[n-1]+0.5*sin(n)));

printf("%d \n%lf \n%lf", n, a[0], a[n]);
FILE *fp;
fp=fopen("them1A.dat", "w");
fprintf(fp, "%d \n%lf \n%lf", n, a[0], a[n]);
fclose(fp);
}
