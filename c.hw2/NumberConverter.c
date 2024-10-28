#include<stdio.h>
	int main(){
	int x, y;
	printf("Please input an integer: ");
	scanf("%d", &x);
	printf("Decima(%d) = Hexadecimal(%x).\n", x, x);
	printf("\n");
	printf("Please input an integer in octal: ");
	scanf("%o", &y);
	printf("Octal(%o) = Hexadecimal(%x).\n", y, y);
}
