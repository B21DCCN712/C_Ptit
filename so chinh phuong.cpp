#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int m=sqrt(a[i]);
		if ( a[i]== pow(m,2)){
			printf("YES\n");
		}
		else {
		printf("NO\n");
		}
	}
}
