#include<stdio.h>
void show(int n){
	int tong=0;
	for(int i=n;i>0;i=i/10){
		int tich=1;
		for(int j=1;j<=i%10;j++){
			tich*=j;
		}
		tong=tong+tich;
	}
	if (tong==n){
		printf("%d ",n);
	}
}
int main(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(a>b){
		temp =a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		show(i);
	}
}
