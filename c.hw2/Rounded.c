#include<stdio.h>
#include<math.h>
int main(){
	double x;
	printf("Floating point number: ");
	scanf("%lf", &x);
	x = round(x);
	printf("The rounded value is %lf.\n", round(x));
}
