#include <stdio.h>
int main() {
	int a, b, c;
	printf("Please input a triangle's 3 sides(a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		printf("It's a triangle!\n");
	} else {
		printf("It's not a triangle\n");
	}
} 
