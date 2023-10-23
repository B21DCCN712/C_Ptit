#include<stdio.h>

int ngto(int n){
	if (n<2) return 0;
	else {
		for(int i=2;i*i<=n;i++){
			if (n % i ==0) return 0;
		}
	}
	return 1 ;
}

long long s[100];
void luutru(){
	long long i=0,dem=0;
	while(dem<100){
		if (ngto(i)){
		s[dem]=i;
		++dem;
		}
		++i;
	}
}

int main(){
	luutru();
	int t;
	scanf("%d",&t);
	for(int m=1;m<=t;m++){
	int n;
	scanf("%d",&n);
	int k=0;
	long long a[n+5][n+5];
	int h1=0,h2=n-1,c1=0,c2=n-1;
	while(k<n*n){
			for(int j=c1;j<=c2;j++){
				a[h1][j]=s[k++];
			}
			for(int j=h1+1;j<=h2;j++){
				a[j][c2]=s[k++];
			}
			for(int j=c2-1;j>=c1;j--){
				a[h2][j]=s[k++];
			}
			for(int j=h2-1;j>=h1+1;j--){
				a[j][c1]=s[k++];
			}
			h1=h1+1;
			h2=h2-1;
			c1=c1+1;
			c2=c2-1;
			}
	printf("Test %d:\n",m);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	}
}
