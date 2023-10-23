#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=0;i<t;i++){
	char s1[200];
	gets(s1);
	char s2[200];
	gets(s2);
	char *token = strtok (s1," ");
	char a[200][200];
	char b[200][200];
	char c[200][200];
	char d[200][200];
	int n=0,m=0,p=0,q=0;
	while ( token != NULL){
			strcpy ( a[n++],token);
			token =strtok (NULL," ");
	}
	for (int i=0;i<n;i++){
		int check=0;
		for (int j=0;j<=i-1;j++){
			if ( strcmp ( a[i] , a[j] ) == 0 ) {
				check =1;
			}
		}
		if (check==0) {
			strcpy (b[m++],a[i]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if (strcmp(b[i],b[j])>0) {
				char sapxep[200]={};
				strcpy(sapxep,b[i]);
				strcpy(b[i],b[j]);
				strcpy(b[j],sapxep);
			}
		}
	}

	char *token1 = strtok (s2," ");
	while ( token1 != NULL){
			strcpy ( c[p++],token1);
			token1 =strtok (NULL," ");
	}
	
	for(int i=0 ;i<m;i++){
		int check=0;
		for(int j=0;j<p;j++){
			if ( strcmp(b[i],c[j])==0) {
				check=1;
			}
		}
		if (check==0) strcpy(d[q++],b[i]);
	}
	for(int i=0;i<q;i++){
		printf("%s",d[i]);
		if(i!=q-1) printf(" ");
	}
	printf("\n");
	}
}
