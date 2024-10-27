#include<stdio.h>
int main(){
	int a, b, c;
	printf("Date (UK): ");
	scanf("%d/%d/%d",&a, &b, &c );
	printf("=Date (US): %02d/%02d/%04d\n", b, a, c);
}
