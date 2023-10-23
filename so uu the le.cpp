#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		long int n ;
		scanf("%li",&n);
		long int k=n;
		int le=0,chan=0;
		while(n>0){
			long int i=n %10;
			if (i % 2 ==0){
				chan++;
			}else{
				le++;
			}
			n /= 10;
		}
		if (k % 2 ==1 && chan < le){
			printf("YES");
		}else printf("NO");
	}
}
