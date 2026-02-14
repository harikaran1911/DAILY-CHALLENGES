#include<stdio.h>
int main(){
	int n,surfacearea,volume,perimeter;
	scanf("%d",&n);
	surfacearea=6*n*n;
	volume=n*n*n;
	perimeter=12*n;
	printf("%d\n%d\n%d",surfacearea,volume,perimeter);
	return 0;
}