#include<stdio.h>
#include<string.h>
int main(){
	int t ;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[505];
		gets(s);
		int k= strlen(s);
		int check=1;
		for (int i=0;i<k;i++){
			if ((s[i] - '0') %2 != 0){
				check =0;
			}
			else if ( s[i] != s[k-i-1]){
				check =0;
			}
		}
		if ( check == 1 ){
			printf("YES\n");
		}else printf("NO\n");
	}
}




//Dinh van toan
