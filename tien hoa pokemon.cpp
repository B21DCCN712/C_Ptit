#include<stdio.h>

typedef struct pokemon{
	char name[100];
	int k,m;
}pokemon;

int tienhoa(pokemon a){
	int val=0;
	while(a.m>=a.k){
		a.m=a.m-a.k;
		val+=1;
		a.m+=2;
	}
	return val;
}


int main(){
	int n;
	scanf("%d",&n);
	pokemon a[75];
	getchar();
	for(int i=0;i<n;i++){
		scanf("%s\n",&a[i].name);
		scanf("%d %d\n",&a[i].k,&a[i].m);
	}
	int max=0,dem=0;
	for(int i=0;i<n;i++){
		int p=tienhoa(a[i]);
		dem =dem + p;
		if(p>max){
		max=p;
		}
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++){
		if (tienhoa(a[i])==max){
		printf("%s",a[i].name);
		break;
		}
	}
}


