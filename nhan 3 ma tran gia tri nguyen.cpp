#include<stdio.h>


int main(){
	int n,m,p,q;
	scanf("%d%d%d%d",&n,&m,&p,&q);
	int a[n][m], b[m][p],c[p][q];
	int d[n][p]; // d=a*b;
	int e[n][q]; // e=d*c;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	
	// tinh d=a*b;
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			d[i][j]=0;
		for(int k=0;k<m;k++){
			d[i][j] += a[i][k] * b[k][j];
		}	
		}
	}
	
	// tinh e=a*b*c = d*c;
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			e[i][j]=0;
			for(int k=0;k<p;k++){
				e[i][j] += d[i][k] * c[k][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			printf("%d ",e[i][j]);
		}
		printf("\n");
	}
	
}
