#include <stdio.h>
#include<math.h>
int main() {
	int x, a;
	printf("How much is the fuel left(unit: ton): ");
	scanf("%d", &x);
	a=round(x/3700.0*100);
	if (x>3700 || x<0){
		printf("ERROR!\n");
		return 0;
	}
	printf("Fuel remains: %d%%\n", a);
	if (a>=75){
		printf("Fuel is sufficient, no need to worry.\n");
	}
	else if (a>=50){
		printf("More than 50%% of fuel remains, you can continue the journey with peace of mind.\n");
	}
	else if (a>=25){
		printf("Less than half of the fuel remains, pay attention to endurance.\n");
	}
	else if (a>=10){
		printf("Less than 25%% of fuel remains, it's recommended to start looking for refueling points.\n");
	}
	else if (a>=0){
		printf("Less than 10%% of fuel remains, please find fuel as soon as possible!\n");
	}
}
