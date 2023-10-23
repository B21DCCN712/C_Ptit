#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool ngto(int n){
	if (n<2){
		return false;
	}
	else {
	for(int i=2;i<=sqrt(n);i++){
		if (n % i ==0 ){
		return false;
	}
	}
}
return true ;
}
int tongchuso(int n){
	int tong=0;
	while(n>0){
		int a=n%10;
		tong+=a;
		n/=10;
	}
	return tong ;
}
int fibonaci(int n){
	int output =1;
	if (n ==1 || n ==2){
		return 1 ;
	}else {
		return fibonaci(n-1) + fibonaci(n-2);
	}
}
int main(){
	int a ,b ;
	scanf("%d%d",&a,&b);
	if (a>b){
		int temp = a ;
		a = b ;
		b = temp ;
	}
	for(int i=a;i<=b;i++){
	for(int j=1;j<=8;j++){
		if (ngto(i) && tongchuso(i) ==fibonaci(j)){
			printf("%d ",i);
		}
	}
	}
}
