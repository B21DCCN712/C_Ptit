#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	    printf("\n");
		int n;
		scanf("%d",&n);
		int a=2;
		while(n>1){
			if (n%a==0){
				printf("%d ",a);
				n /= a;
			}else a++;
		}
	}
}
