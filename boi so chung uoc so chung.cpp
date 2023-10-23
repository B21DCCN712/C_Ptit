#include<stdio.h>
int show(long long a, long long b){
	long t = a*b;
	while(a!=b){
		if (a>b){
			a=a-b;
		} else if (a<b){
			b=b-a;
		}
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld",a*b/show(a,b),show(a,b));
	}
}
