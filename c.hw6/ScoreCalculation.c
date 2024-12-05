#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int compare(const void*a, const void*b){
	return *(int *)b - *(int *)a;
}

int main(){
	int num[9];
	int cheating=0;
	int all90=1;
	printf("Enter the scores: ");
	for(int i=0; i<10; i++){

		scanf("%d", &num[i]);

		if(num[i]>100 || num[i]<-2){
			printf("Invalid score entered!\n");
			return 0;
		}

		if(num[i]==-2){
			cheating=1;
		}
		
		if(num[i]<90){
			all90=0;
		}

		if(num[i]<0){
			num[i]=0;
		}
	}

	qsort(num, 10, sizeof(int), compare);
	
	int high, lowest;
	high=num[0];
	lowest=num[9];
	
	double average;
	int sum;
	if(cheating){
		average=(num[7]+num[8]+num[9])/3.0;
	}else{
		for(int i=0; i<10; i++){
			sum+=num[i];
		}
		average=sum/10.0;
		if(all90){
			average+=5;
		}
		if(average>100){
			average=100;
		}
	}

	printf("homework score: %d\n", (int)round(average));
	printf("highest: %d\n", high);
	printf("lowest: %d\n", lowest);
}




