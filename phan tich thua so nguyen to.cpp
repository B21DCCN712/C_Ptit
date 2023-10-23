#include<stdio.h>
void phantich(int n){
	for (int i=2;i<=n;i++){
		int cout =0;
	while (n%i==0){
			cout ++;
			n /=i;
		}
		if (cout >=1){
		printf("%d^%d",i,cout);
		if (n > i){
			printf(" * ");
		}
	}
		}
	}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int n;
		scanf("%d",&n);
		printf("%d = ",n);
		phantich(n);
	}
}
