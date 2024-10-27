#include<stdio.h>
int main(){
	int a, b, c, x;
	double z;
	printf("Please input total duration of the call(HH:MM:SS): ");
	scanf("%d:%d:%d", &a, &b, &c);
	z=a*3600*0.045+b*60*0.045+c*0.045;
	x=z*10;
	printf("The total duration of your call is %02d:%02d:%02d, and your phone bill is %0.1lf dollars.\n", a, b, c, x/10.0 );
}
