#include<stdio.h>


int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i>=1;i--){
		if (i>=n){
		for(int j=1;j<=n;j++){
			printf("%c",64+n);
		}
		}
		else {
			int max=64+i;
			for(int j=1;j<=n;j++){
			if (j<=n-i) printf("%c",max++);
			else printf("%c",max);
			}
		}
		printf("\n");
	}
}
