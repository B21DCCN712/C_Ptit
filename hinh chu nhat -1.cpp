#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=m;j++){
			printf("%d",j);
		}
			if (i>m){
				printf("%d",i);
				for(int j=m-1;j>0;j--){
					printf("%d",j);
				}
			}else 
				for(int j=i-1;j>0;j--){
					printf("%d",j);
				}
		printf("\n");
}
}

