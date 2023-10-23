#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n ;
		scanf("%lld",&n);
		int tich=1;
		for (int i=2;i<=n;i++){
            if (n % i == 0)tich =tich *i;
            while (n % i ==0){
				n/=i;
			}
		}
		printf("%d\n",tich);
	}
}
