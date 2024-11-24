#include<stdio.h>
int main(){
	int a, b, c;
	printf("Please input two numbers(a,b): ");
	scanf("%d,%d", &a, &b);
	for (int i =1; i<=a*b; i++){
		if(i%a==0 && i%b==0){
		c=i;
		printf("LCM(%d, %d) = %d\n", a, b, c);
		return 0;
		}
	}
}
