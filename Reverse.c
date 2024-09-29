#include <stdio.h>
int main(){
	int x,y;
	printf("Please input a two-digit number (10-99): ");
	scanf("%1d",&x);
	scanf("%1d",&y);
	printf("The reversed number is %d%d!\n", y, x);
}
