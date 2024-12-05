#include<stdio.h>
int main(){
	int a, b, c;
	int count[7]={0};
	int change[]={1, 5, 10, 50, 100, 500, 1000};
	printf("Enter the total amount: ");
	scanf("%d", &a);
	printf("Enter the amount paid: ");
	scanf("%d", &b);
	if(a<=0 ||b<=0){
		printf("Invalid value\n");
		return 0;
	}
	c=b-a;
	if(c<0){
		printf("Invalid input\n");
		return 0;
	}
	for (int i=6; i>=0; i--){
		if(c>=change[i]){
		count[i]=c/change[i];
		c%=change[i];
		}
	}
	for(int i=0; i<7;i++){
		printf("%-5d> %d\n", change[i], count[i]);
	}
}
