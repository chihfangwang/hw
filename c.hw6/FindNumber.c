#include<stdio.h>
int main(){
	int num[9];
	int a, b=0;
	for(int i=0; i<10;i++){
		scanf("%d", &num[i]);
	}
	printf("Enter data:");
	for(int i=0; i<10;i++){
		printf(" %d", num[i]);
	}
	printf("\n");
	printf("Enter a number to find: ");
	scanf("%d", &a);
	for(int i=0; i<10;i++){
		if(num[i] == a){
		b=i+1;
		}
	}
	if(b!=0 && b==1){
	printf("%d is the 1st number.\n", a);
	return 0;
	}
	if(b!=0 && b==2){
	printf("%d is the 2nd number.\n", a);
	return 0;
	}
	if(b!=0 && b==3){
	printf("%d is the 3rd number.\n", a);
	return 0;
	}
	if(b!=0 && b>3){
		printf("%d is the %dth number.\n", a, b);
		return 0;
	}
	else{
		printf("%d is not found\n", a);
	}
}
