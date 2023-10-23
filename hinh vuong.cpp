#include<stdio.h>
int main() {
	int n;
 	scanf("%d", &n);
  	int a[20][20];
   	int k=1; 
	int m=n;
    while(n>0) {
		for(int i=k;i<=2*m-k;i++) {
	  		for(int j=k;j<=2*m-k;j++) {
	   			if(i==k||j==k||j==2*m-k||i==2*m-k) {
	   				a[i][j]=n;
				}
		  	}
		}
	    k++;
		n--;
	} 
	for(int i=1;i<=2*m-1;i++) {
		for(int j=1;j<=2*m-1;j++) {
		    printf("%d", a[i][j]);
		}
		printf("\n"); 
	} 
}
