#include<stdio.h>


int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		if (i<=n){
			int max1=63+i;
			for(int j=1;j<=n;j++){
				if (j<n+1-i) printf("%c",max1++);
				else printf("%c",max1);
			}
		}
		else {
			for(int i=1;i<=n;i++){
			printf("%c",63+n);
		}
		}
		printf("\n");
	}
}
