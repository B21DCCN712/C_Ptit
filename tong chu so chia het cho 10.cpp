#include<stdio.h>
int main(){
	int a[100], n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}for(int i=1;i<=n;i++){
		int sum =0;
		while (a[i]>0){
		m = a[i]% 10;
		a[i] /=10 ;
		sum = sum + m;
	}if (sum % 10 ==0){
		printf("YES\n");
	}else printf("NO\n");
}
}
