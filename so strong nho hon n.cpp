#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
			int tong =0;
		for(int j=i;j>0;j=j/10){
				int dem =1;
			for(int k=1;k<=j%10;k++){
				dem *=k;
			}	tong += dem;
		}
			if (tong ==i){
				printf("%d ",i);
			}
	}
}
