#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int a,b;
		scanf("%d%d",&a,&b);
		while(a!=b){
		if (a>b){
			a=a-b;
		}else {
			b=b-a;
		}
	}printf("%d\n",a);
}
}
