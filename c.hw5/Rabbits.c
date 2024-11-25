#include<stdio.h>
int main(){
	int n;
	printf("Enter n month: ");
	scanf("%d", &n);
	int new[n],grow[n], matured[n], total[n];
	new[0]=1;
	grow[0]=0;
	matured[0]=0;
	total[0]=1;
	if (n<=0 || n>40){
		printf("Error! Out of range.\n");
		return 0;
	}
	else{
		printf("|(n)th     |newborn   |growing   |matured   |total     \n");
		for(int i=1; i<=n; i++){
			matured[i]=grow[i-1]+matured[i-1];
			new[i]=matured[i];
			grow[i]=new[i-1];
			total[i]=new[i]+matured[i]+grow[i];
			printf("|%-10d|%-10d|%-10d|%-10d|%-10d\n", i, new[i-1], grow[i-1], matured[i-1], total[i-1]);
		}
	} 
}
