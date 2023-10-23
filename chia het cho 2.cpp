#include<stdio.h>
void uoc(int n){
	int souoc=0;
	int i=1;
	while(i<=n/i){
		if (n % i ==0){
			if (i % 2 ==0){
				souoc++;
			}
			if (n/i%2==0){
				souoc++;
			}if (n/i ==i && i %2==0){
				souoc--;
			}
		}
		i++; 
	}
printf("%d",souoc);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int n;
		scanf("%d",&n);
		uoc(n);
	}
}
