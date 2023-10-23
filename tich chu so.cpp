#include<stdio.h>
int main(){
	int n,m ;
	scanf("%d",&n);
	int tich =1;
	while(n>0){
	m = n% 10;
	n /= 10;
	tich *= m;	
	}
	printf("%d",tich);
}
