#include <stdio.h>
#include <math.h>

int main (){
	double a, b, c, s, area;
	scanf("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c)/2.0;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.3lf m2\n", area);
	return 0;
}