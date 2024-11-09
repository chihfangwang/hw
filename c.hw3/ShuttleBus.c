#include<stdio.h>
#include<math.h>
int main(){
	int x;
	char a, b, c;
	printf("Ticket type: ");
	scanf("%c",&a);

	printf("Ticket quantity: ");
	scanf("%d", &x);
	
	printf("Grade: ");
	scanf(" %c", &b);
	
	printf("Disabled: ");
	scanf(" %c", &c);
	
	int price;

	switch (a) {
		case 'A':
			price=12;
			break;
		case 'B':
			price=13;
			break;
		case 'C':
			price=15;
			break;
		case 'D':
			price=20;
			break;
		case 'E':
			price=18;
			break;
		case 'F':
			price=16;
			break;
		default :
			printf("ERROR!\n");
			return 0;
	}
	if (x>30 || x<1 || b>'4' || b<'1' || (c!='Y' && c!='N')){
		printf("ERROR!\n");
		return 0;
	}
	double w;
	if (c=='Y') {
		w=0.5;
	} 
	else if (x==30){
		w=0.75;
	}
	else if (x>=10){
		w=0.9;
	}
	else if (b=='1'){
		w=0.95;
	}
	else{
		w=1;
	}
	printf("You need to pay $%d for the ticket(s) you selected.\n", (int)ceil(price*x*w) );
}
