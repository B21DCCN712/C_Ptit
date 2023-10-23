#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int ngto(int n){
	if (n<2){
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(n);i++){
			if (n % i ==0){
				return 0 ;
			}
		}
	}
	return 1 ;
}
	bool chungto(int n){
		while(n>0){
			int m=n%10;
			if (ngto(m) ==0){ 
				return false ;
				break ;
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
	int a , b ;
	int dem =0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if (ngto(i) && chungto(i) ){
			dem++ ;
		}
		}
			printf("%d\n",dem);
	}
}
