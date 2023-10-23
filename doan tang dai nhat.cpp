#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d",&n);
		int a[n];
		int b[1005]={0};
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			int count=1;
			for(int j=i+1;j<n;j++){
				if (a[j]>a[j-1]) count++;
				else break;;
			}
			b[i]=count;
		}
		int max=-1;
		for(int i=0;i<n;i++){
			if(b[i]>max) max=b[i];
		}
		printf("Test %d:\n",k);
		printf("%d\n",max);
		for(int i=0;i<n;i++){
			if (b[i]==max){
				for(int j=i;j<i+max;j++){
					printf("%d ",a[j]);
				}printf("\n");
			}
		}
	}
}
