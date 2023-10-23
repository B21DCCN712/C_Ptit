#include<stdio.h>
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		int n,a[1005];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			int check=1;
			for (int j=i+1;j<n;j++){
				if (a[i] <= a[j]){
					check =0;
				}
			}
			if (check ==1 ){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}
