#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n < 2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int count =0;
		long long n,m;
		scanf("%lld%lld",&n,&m);
		int k= sqrt(m);
		for(int i=sqrt(n);i<=k;i++){
			if ( ngto(i)){
				count++;
			}
		}
		printf("%d\n",count);
	}
}
