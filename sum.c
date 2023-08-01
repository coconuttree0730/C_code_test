#include<stdio.h>
double sum(double x,double y);
int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	double SUM=sum(a,b);
	printf("%lf",SUM);
return 0;
}

double sum(double x,double y)
{

double z=x+y;
return z;
}
