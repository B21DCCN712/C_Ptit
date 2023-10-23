#include<stdio.h>

long long uscln(long a,long b){
	if (b==0) return a;
	return uscln(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		long long bscnn=1;
		for(int i=n;i<=m;i++){
			bscnn=(bscnn*i)/uscln(bscnn,i);
		}
		printf("%lli\n",bscnn);
	}
}
