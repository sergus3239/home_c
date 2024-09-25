#include <stdio.h>  
#include <math.h>
#include <stdlib.h>
const float PI = 3.1415926535;
double cosinus(double);

int main(void)
{
	double x;
	scanf("%lf",&x);
	x *= PI/180.0;
	printf("%.3f",cosinus(x));
	return 0;
}
double cosinus(double x)
{
	
	double sum=1;
	double  xn=1;
	double px=x*x;
	double sign=-1;
	int n=1;
	while (fabs(xn)>0.001)
	{
		
		xn *= px / ((2 * n-1) * (2 * n));
		sum += sign*xn;
		sign=-sign;
		n++;
	}
	return sum;
}

