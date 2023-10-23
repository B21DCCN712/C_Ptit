#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool ngto(int n){
	if (n<2){
		return false;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if ( n % i ==0){
				return false ;
			}
		}
	}
	return true ;
}
bool thuannghich(int n){
	int temp,m=0;
	int p=n;
	while(n>0){
		temp = n % 10;
		m=m*10 + temp ;
		n/=10;
	}
	if (p ==m){
		return true ;
	}
	return false ;
}
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int a,b;
		int dem=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if (ngto(i) && thuannghich(i)){
				dem++;
				printf("%d ",i);
				if (dem == 10){
					printf("\n");
					dem=0;
				}
			}
		}
	}
}
