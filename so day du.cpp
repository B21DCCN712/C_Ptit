#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[1005];
		gets(s);
		int k=strlen(s);
		int check=1;
		for(int i=0;i<k;i++){
			if ( s[i] < 48 || s[i] > 57 || s[0] == 48){
				check=0;
			}
		}
		if ( check ==0) printf("INVALID");
		else {
		int m=0,dem=0;
		while(m<10){
			for(int i=0;i<k;i++){
			if (s[i]-'0'==m) {
				dem++;
				break;
			}
			}
			m++;
		}
			if (dem==10) printf("YES");
			else printf("NO");
		}
	printf("\n");	
	}
}
