#include<stdio.h>
#include<stdbool.h>

bool kiemtra(char s[]){
	int a[10];
	a[0]=s[6] -'0';
	a[1]=s[7] -'0';
	a[2]=s[8] -'0';
	a[3]=s[10]-'0';
	a[4]=s[11]-'0';
	int dem1=0;
	for(int i=0;i<4;i++){
		if(a[i]<a[i+1]) dem1++ ;
		if (dem1==4) return true ;
	}
	for(int i=0;i<=4;i++){
		if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3] && a[3]==a[4]) return true ;
	}
	for(int i=0;i<=4;i++){
		if (a[0]==a[1] && a[1]==a[2] && a[3]==a[4]) return true ;
	}
	int dem2=0;
	for(int i=0;i<=4;i++){
		if (a[i]==6 || a[i] == 8) dem2++ ;
		if (dem2==5) return true ;
	}
	return false ;
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[20];
		gets(s);
		if (kiemtra(s)) printf("YES\n");
		else printf("NO\n");
	}
}
