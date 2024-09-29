#include <stdio.h>

int main(){
	
	int x, y;
	printf("How much is the hourly payment? ");
	scanf("%d" ,&x);
	printf("How many hours did you work in the last month? ");
	scanf("%d",&y);
	printf("Your salary is %d.\n", x*y);
}
