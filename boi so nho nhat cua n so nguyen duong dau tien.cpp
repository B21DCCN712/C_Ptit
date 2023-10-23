#include<stdio.h>

long long uscln(long a,long b){
	if (b==0) return a;
	return uscln(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lli",&n);
		long long bscnn=1;
		for(long long i=2;i<=n;i++){
			bscnn=(bscnn*i)/uscln(bscnn,i);
		}
		printf("%lli\n",bscnn);
	}
}
