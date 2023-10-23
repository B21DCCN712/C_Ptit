#include<stdio.h>
#include<stdlib.h>

struct number{
	int val;
	int fre;
};
int check(int n){
	while(n>=10){
		int r=n%10;
		if(r<(n/10)%10) return 0;
			n/=10;
	}
	return 1;
}

int find(number a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i].val==x) return i;
	}
	return -1;
}

//int cmp(const void *a,const void*b){
//	number *x=(number*)a;
//	number *y=(number*)b;
//	return y->fre-x->fre;
//}
int main(){
number a[10001];
int n=0;
int x;
while(scanf("%d",&x) != -1){
	if(check(x)){
		int idx=find(a,n,x);
		if(idx!=-1){
			a[idx].fre +=1;
		}
		else{
			a[n].val=x;
			a[n].fre=1;
			++n;
		}
	}
}
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(a[i].fre<a[j].fre){
			number temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(int i=0;i<n;i++){
	printf("%d %d\n",a[i].val,a[i].fre);
}
}


