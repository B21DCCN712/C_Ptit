#include<stdio.h>
int main(){
	float n,m;
	int sum =0;
	scanf("%d",&n);
	while(n>0){
		n /=10;
		sum ++ ;
	}
		printf("%d",sum);
}
