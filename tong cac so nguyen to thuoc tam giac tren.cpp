#include<stdio.h>


int ngto(int n){
	if (n<2) return 0;
	else {
		for(int i=2;i*i<=n;i++){
			if (n % i == 0) return 0;
		}
	}
	return 1;
}

int main(){
	int n,tong=0;
	scanf("%d",&n);
	int a[n+5][n+5];
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (j>=i && ngto (a[i][j])  ) tong += a[i][j];
		}
	}
	printf("%d",tong);
}
