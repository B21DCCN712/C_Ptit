#include<math.h>
#include<stdio.h>

int ngto(long long n){
	if (n<2){
		return 0;
	}else for (int i=2;i<=sqrt(n);i++){
		if (n % i ==0 ) return 0;
	}
	return 1;
}
long long uoc( long long n){
	long long x ;
	for (int i=1;i<=sqrt(n);i++){
		if (n % i == 0 ){
			if ( ngto (n/i)) return n/i ;
			else if (ngto (i))
			x=i;
		}
	}
	return x ;
}
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		long long n ;
		scanf("%lld",&n);
		if ( uoc(n)){
			printf("%lld\n",uoc(n));
		}
	}
}
