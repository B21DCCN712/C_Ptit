#include<stdio.h>

long long max(long long a,long long b){
	if (a>=b) return a;
	else return b;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long a[n];
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		long long max1=0,sum=0;
		for(int i=0;i<n;i++){
			sum=max(a[i],sum+a[i]);
				if (sum>max1) max1=sum;
			}
		printf("%lld\n",max1);
	}
}
