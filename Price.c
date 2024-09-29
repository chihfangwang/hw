#include <stdio.h>
int main(){
	int x,y;
	printf("Please input the price: ");
	scanf("%d",&x);
	printf("Please input the quantity: ");
	scanf("%d", &y);
	printf("The total price is NT$%d.\n", x*y);
}

