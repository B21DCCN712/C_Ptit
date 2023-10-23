#include<stdio.h>
#include<math.h>


long long cat(long long n) {
	long long catdoi=0;
	int m=0;
	while(n>0){
		long long k=n % 10 ;
		if ( k !=0 && k !=1 && k !=8 && k !=9) {
			return 0;
		}else {
			if ( k==0 || k==8 || k==9 ) k=0;
			if (k==1) k=1;
			catdoi=catdoi + k* pow(10,m);
			m++;
			n /=10;
		}
	}
	return catdoi;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (cat(n) != 0)
		printf("%lld\n",cat(n));
		else printf("INVALID\n");
	}
}


