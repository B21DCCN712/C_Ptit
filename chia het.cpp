#include<stdio.h>


int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int dem=0;
	int i=2;
	while(i<=n){
		int temp=i;
		while(temp%2==0){
			dem++;
			temp/=2;
		}
		i=i+2;
	}
	if (dem>=k) printf("Yes");
	else printf("No");
}
