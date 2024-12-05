#include<stdio.h>

int main(){
	char a[5][8];
	for(int i=0; i<5; i++){
		scanf("%c%c%c%c%c%c%c%c", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4], &a[i][5], &a[i][6], &a[i][7]);
	}
	char num[100][10];
	for(int i=0;i<100;i++){
   		scanf("%c%c%c%c%c%c%c%c%c%c", &num[i][0],&num[i][1],&num[i][2],&num[i][3],&num[i][4],&num[i][5],&num[i][6],&num[i][7],&num[i][8],&num[i][9]);

		if(a[0][0]==num[i][2] && a[0][1]==num[i][3] && a[0][2]==num[i][4] && a[0][3]==num[i][5] && a[0][4]==num[i][6] && a[0][5]==num[i][7] && a[0][6]==num[i][8] && a[0][7]==num[i][9]){
   			printf("%c%c%c%c%c%c%c%c%c%c 10000000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
		}else if(a[1][0]==num[i][2] && a[1][1]==num[i][3] && a[1][2]==num[i][4] && a[1][3]==num[i][5] && a[1][4]==num[i][6] && a[1][5]==num[i][7] && a[1][6]==num[i][8] && a[1][7]==num[i][9]){
			printf("%c%c%c%c%c%c%c%c%c%c  2000000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
		}
	
		for(int j=2; j<5; j++){
			if(a[j][0]==num[i][2] && a[j][1]==num[i][3] && a[j][2]==num[i][4] && a[j][3]==num[i][5] && a[j][4]==num[i][6] && a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
   				printf("%c%c%c%c%c%c%c%c%c%c   200000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
			}
		}

		for(int j=2; j<5; j++){
                        if(a[j][1]==num[i][3] && a[j][2]==num[i][4] && a[j][3]==num[i][5] && a[j][4]==num[i][6] && a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
                                printf("%c%c%c%c%c%c%c%c%c%c    40000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
                	}
		}

		for(int j=2; j<5; j++){
                        if(a[j][2]==num[i][4] && a[j][3]==num[i][5] && a[j][4]==num[i][6] && a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
                                printf("%c%c%c%c%c%c%c%c%c%c    10000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
                	}
		}

		for(int j=2; j<5; j++){
                        if(a[j][3]==num[i][5] && a[j][4]==num[i][6] && a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
                                printf("%c%c%c%c%c%c%c%c%c%c     4000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
                	}
		}
		
		for(int j=2; j<5; j++){
                        if(a[j][4]==num[i][6] && a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
                                printf("%c%c%c%c%c%c%c%c%c%c     1000\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
                	}
		}

		for(int j=2; j<5; j++){
                        if(a[j][5]==num[i][7] && a[j][6]==num[i][8] && a[j][7]==num[i][9]){
                                printf("%c%c%c%c%c%c%c%c%c%c      200\n", num[i][0],num[i][1],num[i][2],num[i][3],num[i][4],num[i][5],num[i][6],num[i][7],num[i][8],num[i][9]);
                	}
		}
	}
}




				
			
