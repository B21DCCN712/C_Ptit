#include<stdio.h>

void test(){
	int n,m;
		scanf("%d%d",&n,&m);
		int a[n+5][m+5];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int vt=0,d=0;
		int max=m*n;
		while(1){
			for(int i=vt;i<m-vt;i++){
				printf("%d ",a[vt][i]);
				if(++d==max) return ;
			}
			for(int i=vt+1;i<n-vt-1;i++){
				printf("%d ",a[i][m-vt-1]);
				if(++d==max) return ;
			}
			for(int i=m-1-vt;i>vt;i--){
				printf("%d ",a[n-1-vt][i]);
				if(++d==max) return ;
			}
			for(int i=n-1-vt;i>vt;i--){
				printf("%d ",a[i][vt]);
				if(++d==max) return ;
			}
			vt++;
		}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	test();
	printf("\n");	
	}
}
