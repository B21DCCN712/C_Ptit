#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,max ;
	scanf("%d%d",&n,&m);
	if (n>m) max=n;
	else max=m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d",abs(max -i-j+1)+1);
		}
		printf("\n");
	}
}
