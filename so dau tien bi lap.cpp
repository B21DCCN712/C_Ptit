#include<stdio.h>


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p=0;
		scanf("%d",&n);
		long long a[100005];
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if ( a[i] == a[j]) {
					p=1;
					n=0;
					printf("%lld\n",a[i]);
					break ;
				}
			}
		}
		if (p==0) printf("NO\n");
}
}
