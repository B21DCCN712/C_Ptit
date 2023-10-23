#include<stdio.h>
int main(){
	int n ;
	scanf("%d",&n);
	int k=2;
	while(n>1){
		if(n%k==0){
			if (n == k){
				printf("%d",k);
			}
			else {
			printf("%dx",k);
			}
			n/=k;
		}else {
			k++;
		}
	}
}
