#include<stdio.h>
int main(){
	int a;
	printf("Please input an integer greater than or equal to 3: ");
	scanf("%d", &a);
	if(a<3){
	printf("Input Error!\n"); 
	return 0;
	}
	for(int i=1; i<=a; i++){
		for(int j=0;j<a-i;j++){
			printf(" ");
		}
		for(int j=0;j<2*i-1;j++){
			printf("+");
		}
		printf("\n");
	}
	for (int i=a-1; i>=1; i--){
		for(int j=0; j<a-i; j++){
			printf(" ");
		}
		for(int j= 0; j<2*i-1; j++){
			printf("+");
		}
		printf("\n");
	}
}
