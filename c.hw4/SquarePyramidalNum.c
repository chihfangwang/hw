#include<stdio.h>
int main(){
	int n;
	printf("Please input an integer: ");
	scanf("%d", &n);
	long long ans = 0;
	for(int i=0; i<n; i++ ){
		if(i) printf(" + ");
		printf("%lld", 1LL*(i+1)*(i+1));
		ans += (i+1)*(i+1);
	}
	printf(" = %lld", ans);
}
