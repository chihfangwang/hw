#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int x, y;
	srand(time(NULL));
	x=rand()%6+1;
	y=rand()%6+1;
	printf("Throwing two dice...\n");
	printf("One dice shows %d and another dice shows %d.\n", x, y);
	printf("The score is %d + %d = %d.\n", x, y, x+y);


}

