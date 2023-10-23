#include<stdio.h>
#include<string.h>

void lower(char s[]){
	int k=strlen(s);
	for(int i=0;i<k;i++){
		if (s[i]<97 && s[i] !=' ') s[i] +=32;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for(int k=1;k<=t;k++){
		char s1[250];
		gets(s1);
		char s2[50];
		gets(s2);
//		lower(s1);
		lower(s2);
		char a[250][250];
		char b[250][250];
		char c[250][250];
		int n=0,m=0,p=0;
		char *token=strtok(s1," ");
		while(token!=NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			strcpy(b[m++],a[i]);
		}
		for(int i=0;i<m;i++){
			lower(b[i]);
		}
		for(int i=0;i<n;i++){
			int check=0;
			if (strcmp(b[i],s2)==0) check=1;
			if (check==0) strcpy(c[p++],a[i]);
		}
		printf("Test %d: ",k);
		for(int i=0;i<p;i++){
			printf("%s ",c[i]);
		}
		printf("\n");
	}
}

