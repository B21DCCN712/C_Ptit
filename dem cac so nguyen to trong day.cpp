#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2){
		return 0;
	}else for (int i=2;i<=sqrt(n);i++){
		if (n % i == 0 ){
			return 0;
		}
	}
	return 1;
}

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
	    	for (int j=i+1;j<n;j++){
	    		if (a[i] > a[j]){
	    			int temp = a[i];
	    			a[i]=a[j];
	    			a[j]=temp;
				}
			}
		}
	    for(int i=0;i<n;i++){
	    	b[a[i]]++;
	    }
	    printf("Test %d:\n", j);
	    for(int i=0;i<n;i++){
	    	if (b[a[i]]>=1 && ngto (a[i])){
	    		printf("%d xuat hien %d lan\n",a[i],b[a[i]]);	
	      		b[a[i]]=0;
		    }
		}
	}
}

