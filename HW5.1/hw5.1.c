#include <stdio.h>

#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, z;
	x = 6.251;
	y = 0.827;
	z = 25.001;
	double res1, res2, res3, res4, res5, res6, res7, res8, res9, res10, res11, final;
	res1 = fabs(x);
	res2 = pow(res1, 1. / 3);
	res3 = pow(y, res2);
	res4 = ((cos(y) * cos(y) * cos(y)));
	res5 = (fabs(x - y));
	res6 = (1. + ((sin(z) * sin(z)) / (sqrt(x + y))));
	res7 = (res5 * res6);
	res11 = fabs(x - y);
	res8 = (exp(res11) + (x / 2));
	res9 = (res6 / res8);
	res10 = (res4 * res9);
	final = (res3 + res10);
	printf("%.4lf", final);


}