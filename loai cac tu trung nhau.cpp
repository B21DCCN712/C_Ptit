#include<stdio.h>
#include<string.h>

int main(){
	char s1[100];
	gets(s1);
	char *token = strtok (s1," ");
	char a[50][50];
	char b[50][50];
	int n=0,m=0;
	while ( token != NULL){
			strcpy ( a[n],token);
			n++;
			token =strtok (NULL," ");
	}
	for (int i=0;i<n;i++){
		int check=0;
		for (int j=i-1;j>=0;j--){
			if ( strcmp ( a[i] , a[j] ) == 0 ) {
				check =1;
			}
		}
		if (check==0) {
			strcpy (b[m],a[i]);
				m++;
		}
	}
	for(int i=0 ;i<m;i++){
		printf("%s ",b[i]);
	}
	
}
