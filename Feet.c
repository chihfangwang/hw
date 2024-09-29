#include <stdio.h>

int main(){

	int x, y;
	printf("How many chickens are in the cage? ");
	scanf("%d", &x);
	printf("How many rabbits are in the cage? ");
	scanf("%d", &y);
	printf("There are %d feet in the cage.\n" ,2*x+4*y);
}
