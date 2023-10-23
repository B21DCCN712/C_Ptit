#include<stdio.h>
int main(){
	int n;
	int tong =0;
	scanf("%d",&n);
	for(int i=n;i>0;i=i/10){
		int a=1;
		for(int j=1;j<=i%10;j++){
			a *=j;
		}tong = tong+a;
	}
	if(n==tong){
			printf("1");
		}else printf ("0");
}
