#include<stdio.h>
	int main(){
	int x, y;
	printf("Please input an integer: \n");
	scanf("%d", &x);
	printf("Decima(%d) = Hexadecimal(%x).\n", x, x);
	printf("Please input an integer in octal: \n");
	scanf("%o", &y);
	printf("Octal(%o) = Hexadecimal(%x).\n", y, y);
}
