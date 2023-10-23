#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		long long n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			if (i==0|| i==1){
				a[i]=1;
			}else{
				a[i]=a[i-1]+a[i-2];
			}
		}
		printf("%lld",a[n-1]);
	}
}
