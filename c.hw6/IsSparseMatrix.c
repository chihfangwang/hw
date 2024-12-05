#include<stdio.h>
int main(){
	int spare[3][3];
	int a=0;
	printf("Enter data:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &spare[i][j]);
			if(spare[i][j]==0){
			a++;
			}
		}
	}
	if(a>4){
		printf("It is a sparse matrix!\n");
	}
	else{
		printf("It is not a sparse matrix!\n");
	}
}
