#include<stdio.h>
int main(){
	char x, y;
	int a;
	printf("Please input a uniform-invoice number: ");
	scanf("%c%c%d", &x, &y, &a);
	printf("the last 3 digits are %03d.\n", a%1000);
}
