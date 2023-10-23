#include<stdio.h>
#include<math.h>
int nto(int n){
	if (n<2){
		return 0;
	}
	for(int i=2;i<sqrt(n);i++){
		if (n % i ==0){
			return 0;
		}
	}
	return 1;
}
	int hh(int i){
		return (pow(2,i)-1)* pow(2,i-1);
	}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;hh(i)<n;i++){
		 int t = pow(2,i)-1;
		if (nto(t)==1){
		printf("%d ",hh(i));
		}
	}
}
	
