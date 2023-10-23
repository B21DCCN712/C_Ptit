#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool sokhongiam(int n){
	int a=n%10;
	n/=10;
	while(n>0){
		 int b=n%10;
		 if (a<b){
			return false ;
		} else {
			a=b;
			n/=10;
		}
	}
		return true ;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int n ;
		scanf("%d",&n);
		int a=pow(10,n-1),b=pow(10,n);
		for(int i=a;i<b;i++){
			if (sokhongiam(i)==1 ){
			printf("%d ",i);			}
		}	}
}
