#include <stdio.h>
int main(){
	printf("Please input a year: ");
	int x;
	scanf("%d", &x);
	if(x%4==0 && x>0 ) {
		if(x%400==0){
			printf("Leap Year\n");
		} else if (x%100==0){ 
			printf("Not a Leap Year\n");
		} else{
			printf("Not a Leap Year\n");
		}
	}
	else if(x<=0){
		printf("ERROR!\n");
	}
}
