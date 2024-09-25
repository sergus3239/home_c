#include <stdio.h>  
#include <math.h>
#include <stdlib.h>
const float PI = 3.1415926535;
double sinus(double);

int main(void)
{
	double x;
	scanf("%lf",&x);
	x *= PI/180.0;
	printf("%.3f",sinus(x));
	return 0;
}
double sinus(double x)
{
	int i=1;
	double nx=x;
	double sum=1;
	while (fabs(nx)>0.001)
	{
		sum += nx;
		nx *= -1.0 * x * x / (2 * i);
		i++;
	}
	return sum;
}

