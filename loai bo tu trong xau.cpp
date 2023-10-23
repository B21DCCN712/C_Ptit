#include<stdio.h>
#include<string.h>

int main(){
	char s1[100];
	gets(s1);
	char s2[100];
	scanf("%s",s2);
	char *token = strtok (s1," ");
	while ( token != NULL){
		if ( strcmp (token,s2) != 0 ) {
			printf("%s ",token);
		}
		token =strtok (NULL," ");
	}
	
}
