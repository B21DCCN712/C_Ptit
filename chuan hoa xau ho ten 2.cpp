#include<stdio.h>
#include<string.h>

void chuanhoa(char s[]){
	int k=strlen(s);
	if (s[0] >=97) s[0] = s[0]-32;
	for(int i=1;i<k;i++){
		if (s[i] <97) s[0] = s[0]+32;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[100];
		gets(s);
		char a[100][100];
		int n=0;
		char *tach=strtok(s," ");
		while(tach!=NULL){
			strcpy (a[n++],tach);
			tach=strtok(NULL," ");
		}
		for(int i=1;i<n;i++){
			int k=strlen(a[i]);
			if (a[i][0] >96) a[i][0] -= 32;
			for(int j=1;j<k;j++){
				if(a[i][j] <97) a[i][j] +=32;
			}
			printf("%s",a[i]);
			if (i!=n-1) printf(" ");
		}
		int k=strlen(a[0]);
			for(int j=0;j<k;j++){
				if(a[0][j] >=97) a[0][j] -=32;
			}
			printf(", %s",a[0]);
		
		printf("\n");
	}
}
