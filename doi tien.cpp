#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int soto =0;
		scanf("%d",&n);
		int a[] ={1,2,5,10,20,50,100,200,500,1000};
		for(int i=9;i>=0;i--){
			soto += n / a[i] ;
			n = n % a[i];
			}
		printf("%d\n",soto);
	}
}
