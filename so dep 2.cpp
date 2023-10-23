#include<stdio.h>
#include<string.h>


int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[505];
		gets(s);
		int k= strlen(s);
		int check=0,tong =0;
		for(int i=0;i<k;i++){
			if ( (s[0]-'0') != 8 ) check=1;
			else if ( s[i] != s[k-1-i]) check=1;
		}
		for(int i=0;i<k;i++){
			tong += s[i]-'0';
		}
		if ( tong % 10 != 0) check=1;
		if (check==0 ) printf("YES\n");
		else printf("NO\n");
	}
}
