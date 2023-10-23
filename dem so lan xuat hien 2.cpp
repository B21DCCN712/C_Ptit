#include<stdio.h>
int main(){
	int t ;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int n;
		int b[100009];
		for(int i = 0; i < 100009; i++) {
			b[i] = 0;
		}
		scanf("%d",&n);
		int a[105];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	    for(int i=0;i<n;i++){
	    	b[a[i]]++;
	    }
	    printf("Test %d:\n", j);
	    for(int i=0;i<n;i++){
	    	if (b[a[i]]>=1){
	    		printf("%d xuat hien %d lan\n",a[i],b[a[i]]);	
	      		b[a[i]]=0;
		    }
		}
	}
}
