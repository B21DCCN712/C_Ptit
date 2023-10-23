#include<stdio.h>
int f(int n){
	
	if (n==0 || n ==1){
		return n;
	} else return f(n-1)+f(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",f(i));
	}
}
