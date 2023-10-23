#include<stdio.h>
#include<string.h>


int main(){
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){
		char s[25];
		scanf("%s",s);
		int k=strlen(s);
		int dem=0;
		for(int i=0;i<k/2;i++){
			if (s[i] != s[k-1-i] ) dem++;
		}
		if (k%2==1){
			if (dem==1|| dem==0) printf ("YES\n") ;
			else printf("NO\n");
		}else {
			if ( dem==1 ) printf("YES\n");
			else printf("NO\n");
		}
	}
}
