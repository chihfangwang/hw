#include<stdio.h>
int main(){
	int a;
	printf("Please input an integer: ");
	scanf("%d", &a);
	int i=2;
	while (i*i<=a){
		if(a%i==0){
			printf("The integer %d is not a prime number!\n", a);
			return 0;
		}
		i++;
}
	printf("The integer %d is a prime number.\n",     a);
	}
