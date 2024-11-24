#include<stdio.h>
int main(){
	int n;
	int sum=0;
	int plus =0;
	printf("Please input an integer: ");
	scanf("%d", &n);
	if(n<=0){
	printf("Input Error\n");
	return 0;
	}
	if (n==1 ||n==2){
		printf("There isn't any prime number between 1 and 2.\n");
	}
	for(int i=2;i<n;i++){
		int prime=0;
			for (int j=2;j<i;j++){
				if(i%j==0){
					prime=1;
					break;
				}
			}
		if(prime==0){
			if(plus)printf("+ ");
			printf("%d", i);
			sum+=i;
			plus=1;
		}
	}
	printf("= %d\n", sum);
}
