#include<stdio.h>
int main(){
	int n ;
	scanf("%d",&n);
	int a = n%10;
	int b=1;
	int f=n;
	while(f>=10){
		f/=10;
		b*=10;
	}
	int c = n%b;
	printf("%d",a*b+c-a+(n-c)/b);
}
