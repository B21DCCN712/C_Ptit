#include<stdio.h>
#include<string.h>

void sapxep(long long a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				long long temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int check(long long a[],int n){
	for(int i=n-1;i>=2;i--){
			int l=0,r=i-1;
			while(l<r){
				if(a[l]+a[r]==a[i]) return 1;
				if(a[l]+a[r]<a[i]) l++;
				else r--;
			}
		}
		return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long a[n+5];
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			a[i]=(long long)x*x;
		}
		sapxep(a,n);
		if (check(a,n))printf("YES\n");
		else printf("NO\n");
	}
}
