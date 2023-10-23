#include<stdio.h>
#include<string.h>


int main(){
	char s[50];
	gets(s);
	int n=0;
	char a[50][50];
	char b[50][50];
	char *tach=strtok(s," ");
	while(tach!=NULL){
		strcpy(a[n++],tach);
		tach=strtok(NULL," ");
	}
	
	for(int i=0;i<n-1;i++){
		if (a[i][0] <97) a[i][0]=a[i][0]+32;
		printf("%c",a[i][0]);
	}
	int k=strlen(a[n-1]);
	for(int i=0;i<k;i++){
		if (a[n-1][i] <97) a[n-1][i]=a[n-1][i]+32;
	}
	printf("%s",a[n-1]);
	printf("@ptit.edu.vn");
}
