#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
			int b=0;
		for(int j=2;j<=sqrt(a[i]);j++){
			if(a[i] % j ==0){
				b++;
			}
		}
			if (b==0){
				printf("YES\n");
			}else printf("NO\n");
	}
}
