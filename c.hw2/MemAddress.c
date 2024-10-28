#include<stdio.h>
int main(){
	int x;
	printf("x is allocated at memory address %#1x-%#1x.\n",&x, (unsigned long)(&x)+sizeof(x)-1);
}
