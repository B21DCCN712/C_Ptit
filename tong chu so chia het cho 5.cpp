#include<stdio.h>
#include<math.h>

int ngto(int n){
	for (int i=2;i<= sqrt(n);i++){
		if ( n % i == 0 ) return 0;
	}
	return 1 ;
}
int tongchuso(int n){
	int tong=0;
	while(n>0){
		int k = n % 10;
		tong += k ;
		n /= 10 ;
	}
	return tong ;
}
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	for (int i=2;i<=n;i++){
		if (ngto(i)) {
			if ( tongchuso(i) % 5 ==0 ){
				printf("%d ",i);
				dem++;
			}
		}
	}
	printf("\n%d",dem);
}
