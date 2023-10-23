#include<stdio.h>


int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("%d ",a[0]);
		for(int i=0;i<n-1;i++){
			int x=gcd(a[i],a[i+1]);
			printf("%d ",a[i]*a[i+1]/x);
		}
		printf("%d",a[n-1]);
		printf("\n");
	}
}
