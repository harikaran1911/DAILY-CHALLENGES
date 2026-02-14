#include<stdio.h>
int main(){
	int n,middlenum;
	scanf("%d",&n);
	middlenum=(n/10)%10;
	printf("%d",middlenum);
	return 0;
}