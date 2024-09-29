#include <stdio.h>
int main(){
	int x, y, z;
	printf("Please input the current year: ");
	scanf("%d", &x);
	printf("Please input the year of your birthday: ");
	scanf("%d" ,&y);
	z=x-y;
	printf("You are %d years old.\n", z);
}

