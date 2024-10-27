#include<stdio.h>
#include<math.h>
int main(){
	int x, y, z;
	double s;
	printf("Please input the lengths of the three sides of the triangle (a,b,c):  ");
	scanf("%d,%d,%d",&x, &y, &z);
	s=(x+y+z)/2.0;
	printf("Aeaa of the triangle = %0.3lf.\n", sqrt(round(s*(s-x)*(s-y)*(s-z))));
} 
