#include<stdio.h>
#include<string.h>

int kt(char s[]){
	int k=strlen(s);
	for(int i=0;i<k;i++){
		if ( s[i] <48 || s[i] >57 || s[0]==0) return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[1005];
		scanf("%s",s);
		if (kt(s)) printf("INVALID\n");
		else {
		int k=strlen(s);
		int chan=0,le=0;
	for(int i=0;i<k;i++){
		if ( (s[i]-'0') % 2==0) chan ++;
		if ((s[i]-'0') %2 ==1) le++;
	}
	if (k%2==0 && chan>le || k%2==1 && le>chan) printf("YES\n");
	else printf("NO\n");
	}
}
}
