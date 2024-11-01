#include <stdio.h>
int main() {
	printf("Please input a coordinate(x,y): ");
	int x, y;
	scanf("%d,%d", &x, &y);
	if(x<=200 && x>=-200 && y<=110 && y>=-110) {
		printf("On the boundary\n");
	}
	else { 
		printf("Outside\n");
	}
}
