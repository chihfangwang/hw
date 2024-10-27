#include <stdio.h>
int main(){
	int x,y;
	printf("Please input a year in ROC: ");
	scanf("%d",&x);
	y=x+1911;
	printf("ROC %d is AD %d.\n", x,y);
}
