#include<stdio.h>
int f(int n){
	if (n<=2){
		return 1;
	}
	return f(n-1)+f(n-2);
}
int main(){
	int n;
	int dem=0;
	scanf("%d",&n);
	for(int i=0;f(i)<=n;i++){
		if (f(i) ==n){
			dem++;
		}
	}
	if (dem ==1){
		printf("1");
	}else printf("0");
}
