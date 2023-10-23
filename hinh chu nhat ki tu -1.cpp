#include<stdio.h>


int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int max1;
	if (m>n) max1 =m ;
	else max1=n;
	for(int i=1;i<=m;i++){
		int max2=96+max1;
		for(int j=1;j<=n;j++){
			if (j<i) printf("%c",max2--);
			else printf("%c",max2);
		}
		printf("\n");
	}
}
