#include<stdio.h>
#include<stdbool.h>
bool sothuannghich(long long n){
	long long m=n;
	long long somoi =0;
	while(n>0){
		long long k=n%10;
		somoi  = somoi * 10 +k;
		n/=10;
	}
	if (m == somoi){
		return true ;
	}
	return false ;
}
bool tongle(long long n){
	int tong=0;
	while(n>0){
		long long k=n%10;
		tong+=k;
		n/=10;
	}
	if (tong % 2 ==0){
		return false ;
	}
	return true ;
}
bool chusole(long long n){
	while(n>0){
		long long k=n%10;
		if (k % 2 ==0){
			return false ;
		}else {
			n/=10;
		}
	}
	return true ;
}
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		long long n;
		scanf("%lld",&n);
		if (sothuannghich(n) && tongle(n) && chusole(n)){
			printf("YES");
		}else printf("NO");
		
	}
}
