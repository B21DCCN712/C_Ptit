#include<stdio.h>
int main(){
	int n ;
	int year=0 , week=0, day=0 ;
	scanf("%d",&n);
	year = n/365 ;
	week = (n -year*365)/7 ;
	day = (n-year*365)-(week*7);
	printf("%d %d %d",year, week,day);
}
