#include<stdio.h>
int main(){
	int a[100],n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n;i++){
		int k = a[i];
		while (k>=1){
		m = k % 10;
		k /=10;
	}
	if ((m%10) == (a[i] % 10)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	printf("\n");
}
}
