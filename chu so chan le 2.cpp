#include<stdio.h>
int main(){
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}
	for(int i=0;i<n;i++){
			int le=0,chan=0,m;
		while(a[i]>0){
			m = a[i] % 10 ;
			if( m % 2 == 1){
				le++;
			}
			else {
				chan ++;
			}
			a[i] /= 10;
	}
	printf("%d %d\n",le,chan);
}
}

