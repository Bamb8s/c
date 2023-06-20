#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
FILE *fp;
int i,n;
double a[n];

fp=fopen("thema1B.dat", "w");
while(n<3)
	{
	printf("Give n\n");
	scanf("%d", &n);
	};
for (i=0;i<3;i++)
	{
	while(a[i]<=1. || a[i]>=4.)
		{
		printf("Give a[%d]\n", i);
		scanf("%lf", &a[i]);
		};
	};

a[n]=2.*pow(a[n-1],2.)+3.*pow(a[n-2],7.)+sqrt(a[n-3])+4.*pow(2*n+3,0.2);

printf("n=%d \na[0]=%lf \na[1]=%lf \na[2]=%lf \na[%d]=%lf", n, a[0], a[1], a[2], n, a[n]);
fprintf(fp, "n=%d \na[0]=%lf \na[1]=%lf \na[2]=%lf \na[%d]=%lf", n, a[0], a[1], a[2], n, a[n]);
fclose(fp);
}
