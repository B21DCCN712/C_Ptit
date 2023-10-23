#include<stdio.h>
int show(long int n){
int output=1 ;
for (long i=n;i>0;i=i/10){
	if (i % 2 ==1){
		output=0;
	}
}
return output;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		 long int n;
		 scanf("%ld",&n);
		 if (show(n)==1){
			 printf("YES\n");
			 }else printf("NO\n");
		 }
	}


