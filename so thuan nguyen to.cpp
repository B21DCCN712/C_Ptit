#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int nguyento(int n){
	if (n<2){
		return 0 ;
	} else{
		for(int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				return 0 ;
			}
		}
	}
	return 1 ;
}
bool kiemtratong(int n){
	int tong =0;
	while(n>0){
		int k =n%10;
		tong+=k;
		n/=10;
	}
	if (nguyento(tong) ==0){
		return false;
	}
	return true ;
}
bool kiemtrachuso(int n){
	while(n>0){
		int k=n%10;
		if (nguyento(k)==0){
			return false ;
		}
		else {
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
		int a,b,dem=0 ;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if (nguyento(i)==1 && kiemtratong(i) && kiemtrachuso(i)){
				dem++;
			}
		}
		printf("%d",dem);
	}
}
