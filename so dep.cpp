#include<stdio.h>
#include<math.h>
int thuannghich(long long n){
	long long m=n;
	long long somoi=0;
	int sochu=0;
	while(n>0){
		long long k=n%10;
        somoi = somoi * 10 + k;
		n/=10;
		sochu++;
	}
	long long k= pow(10,sochu-1);
	if ((m%k)/10 == (somoi % k) / 10 ){
	if (m % 10 == 2 * (somoi %10) || somoi % 10 == 2 * (m % 10)){
		return 1;
	}
}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (thuannghich(n)==1){
			printf("YES\n");
		}else printf("NO\n");
	}
}
