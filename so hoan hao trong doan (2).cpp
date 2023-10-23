#include<stdio.h>
#include<stdbool.h>
bool kt(int n){
	int tong=0;
	for(int i=1;i<n;i++){
		if (n % i==0){
			tong=tong+i;
		}
}if (tong ==n){
	return true;
}
return false;
}
int main(){
	int a,b ;
	scanf("%d%d",&a,&b);
	if (a>b){
		int temp =a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if (kt(i)){
			printf("%d ",i);
		}
	}
}
