#include<stdio.h>
#include<string.h>
int demso(char a[100]){
	int dem =0;
	int n=strlen(a);
	for(int i=0;i<n-1;i++){
		if ( a[i]==' ' && a[i+1] != ' '){
			dem++;
		}
	}
		if (a[0] != ' '){
			dem++;
		}
return dem ;
	
}
int main(){
	int t;
	char s[2000];
	scanf("%d",&t);
	getchar();
		while(t--){
		printf("\n");
		gets(s);
		int max =demso(s);
		printf("%d",max);
}
}

