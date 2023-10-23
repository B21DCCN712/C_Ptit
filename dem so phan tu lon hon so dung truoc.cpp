#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n,a[100];
	scanf("%d",&n);
	int dem = 1 ;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(int i=0;i<n;i++){
		if (a[i] > max){
			max =a[i];
			dem++;
		}
	}
	printf("%d\n",dem);
}
}
