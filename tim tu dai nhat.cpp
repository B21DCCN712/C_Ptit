#include<stdio.h>
#include<string.h>


char s[1000][100],kitu='a',temp[100]="0000";
int n=0,max=0;
int main(){
	while(kitu != EOF){
		scanf("%s",&s[n]);
		int k=strlen(s[n]);
		if(max<k) max=k;
		n++;
		kitu=getchar();
	}
	for(int i=0;i<n;i++){
		if(strcmp(s[i],temp)!=0 && strlen(s[i])==max){
			int c=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(s[i],s[j])==0){
					c++;
					strcpy(s[j],temp);
				}
			}
		printf("%s %d %d\n",s[i],max,c);
		}
	}
	return 0;
}
