#include<stdio.h>
int main(){
	int a,b ,c,tong1=0,tong2=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i>0;i=i/10){
		 tong1 +=i%10;
	} for(int j=b;j>0;j/=10){
		tong2 +=j%10;
	}
	if (tong1> tong2){
		c=a;
		a=b;
		b=c;
		
	} printf("%d %d",a,b);
}
