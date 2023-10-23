#include<stdio.h>

int ngto(int n){
	if (n<2) return 0;
	else {
		for(int i=2;i*i<=n;i++){
			if (n%i==0) return 0;
		}
	}
	return 1 ;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int b[100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=0;j<n;j++){
			if (ngto(a[i][j])) dem++;
		}
		b[i]=dem;
	}
	int max=b[0];
	int k;
	for(int i=0;i<n;i++){
		if (b[i] > max ) max=b[i];
	}
	for(int i=0;i<n;i++){
		if (b[i]==max) {
			k=i;
			break;
		}
	}
	printf("%d\n",k+1);
	for(int i=0;i<n;i++){
		if (ngto(a[k][i]))
		printf("%d ",a[k][i]);
	}
}
