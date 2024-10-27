#include <stdio.h>
int main(){
	int x,y,z;
	printf("Please input the length: ");
	scanf("%d", &x);
	printf("Please input the width: ");
	scanf("%d", &y);
	printf("Please input the height: ");
	scanf("%d", &z);
	printf("The volume is %dx%dx%d = %d.\n" ,x,y,z,x*y*z);
}
