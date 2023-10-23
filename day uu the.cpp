#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int l=0,c=0,dem=0;
	char kitu=' ';
	while(kitu!='\n'){
		int x;
		scanf("%d",&x);
		if (x%2==0) c++;
		else l++;
		dem++;
		kitu=getchar();
	}
	if (dem%2==0 && c>l || dem%2==1 && l>c) printf("YES\n");
	else printf("NO\n");	
	}
}
