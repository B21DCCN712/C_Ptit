#include<stdio.h>

int main()
{
int m,n ;
int a[1000],b[1000];
scanf("%d%d",&m,&n);
for(int i=0;i<m;i++){
scanf("%d",&a[i]);}
for (int j=0;j<n;j++){
scanf("%d",&b[j]);}
int c;
scanf ("%d",&c);
for (int i=0;i<c;i++){
printf("%d ",a[i]);}
for (int j=0;j<n;j++){
printf("%d ",b[j]);}
for(int i=c;i<n;i++){
printf("%d ",a[i]);}
}
