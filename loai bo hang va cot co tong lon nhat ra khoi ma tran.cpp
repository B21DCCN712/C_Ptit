#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int p,max1=0;
		for(int i=0;i<n;i++){
			int tong=0;
			for(int j=0;j<m;j++){
			tong+=a[i][j];	
			}
			if (tong>max1){
				max1=tong;
				p=i;
			}
		}
			for(int i=p;i<n;i++){
				for(int j=0;j<m;j++){
					a[i][j]=a[i+1][j];
				}
			}
			n--;
			int q;
			int max2=0;
		for(int i=0;i<m;i++){
			int tong=0;
			for(int j=0;j<n;j++){
			tong+=a[j][i];	
			}
			if (tong>max2){
				max2=tong;
				q=i;
			}
		}
			for(int i=q;i<m;i++){
				for(int j=0;j<n;j++){
					a[j][i]=a[j][i+1];
				}
			}
			m--;
			printf("Test %d:\n",k);
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n");
	}
}
