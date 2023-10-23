#include<stdio.h>
#include<string.h>
#include<stdbool.h>



bool check(char s[]){
	int k=strlen(s);
	for(int i=0;i<k/2;i++){
		if (s[i] != s[k-1-i]) return 0 ;
	}
	return 1;
}


int main(){
	long long n=0,max=0;
	char kt='a',s[10000][100], temp[1000]="00000";;
	while(kt != EOF){
		scanf("%s",s[n++]);
		kt=getchar();
	}
	for(int i=0;i<n;i++){
		if(check(s[i])){
			long long m=strlen(s[i]);
			if(max<m) max=m;
		}else strcpy(s[i],temp);
	}
	for(int i=0;i<n;i++){
		long long m=strlen(s[i]);
		if(strcmp(s[i],temp)!=0 && max==m){
			long long cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(s[i],s[j])==0) {
					cnt++;
					strcpy(s[j],temp);
				}
			}
			printf("%s %lld\n",s[i],cnt);
		}
	}
	return 0;
}
