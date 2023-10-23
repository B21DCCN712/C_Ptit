#include<stdio.h>

int thuannghich(int n){
	int k=n;
	int somoi=0;
	while(n>0){
		int m=n%10;
		if (m ==9) return 0;
		somoi = somoi * 10 + m;
		n/=10;
	}
	if (k == somoi ) return 1;
	return 0;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<= n;i++){
		if (thuannghich(i)){
			dem++;
			printf("%d ",i);
		}
	}
	printf("\n%d",dem);
}
