#include<stdio.h>
#include<stdbool.h>
bool sogiam(int n){
	int a=n%10;
	n/=10;
	
	while(n>0){
		 int b=n%10;
		 if (a>=b){
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
	int dem =0;
	int a,b ;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if (sogiam(i)){
			dem++;
		}
	}
	printf("%d",dem);
}
}
