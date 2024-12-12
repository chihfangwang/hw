#include<stdio.h>
int main(){
	int number[10];
	for(int i=0; i<10;i++){
		scanf(" %d", &number[i]);
	}
	printf("original array:");
	for(int i=0;i<10;i++){
		printf(" %d", number[i]);
	}
	printf("\n");
	printf("reversedarray:");
	for(int i=9;i>=0;i--){
		printf(" %d",number[i]);
	}
	printf("\n");
}
