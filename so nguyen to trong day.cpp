#include<stdio.h>
#include<math.h>
int nguyento(int n){
	if (n<2){
return 0;
	}else for(int i=2;i<=sqrt(n);i++){
		if (n % i ==0){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		int n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if (nguyento(a[i])==1){
				printf("%d ",a[i]);
			}
		}
	}
}
