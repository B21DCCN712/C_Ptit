#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	gets(s);
	char a[50][50];
	int n=0;
	int b[100]={0};
	int k=strlen(s);
	for(int i=0;i<k;i++){
		if (s[i] <97 && s[i] !=' ') s[i] +=32;
	}
	char *token=strtok(s," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if (b[i]==0){
			int dem=1;
		for(int j=i+1;j<n;j++){
			if (strcmp(a[i],a[j])==0) {
				dem++;
				b[j]=1;
			}
		}
		printf("%s %d\n",a[i],dem);
	}
}
}
