#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1 ;
}
int main(){
	int t;
	long long tong=0 ;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(ngto(n)) tong += n;
		else {
			while (n % 2 == 0){
				tong +=2;
				n=n/2;
			}
			if (ngto(n)) tong +=n;
			else {
				for (int i=3;i*i <= n;i+=2){
					while (n % i == 0 ){
						n=n/i;
						tong = tong + i;
					}
				}
				if(n > 2) tong += n;
			}	
		}
	}
	printf("%lld",tong);
}
