#include<stdio.h>
#include<string.h>
int main(){
	char a[100000];
	gets(a);
	int n=strlen(a);
	int check =0;
	for(int i=0;i<n;i++){
	if (a[i] != ' '){
		check =0;
		break ;
	} else{
		check=1;
	}
}   if (check==0){
	printf("%d",n-1);
}	
	return 0 ;
}
