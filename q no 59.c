#include<stdio.h>
int main(){
	int n,surfacearea;
	float volume;
	scanf("%d",&n);
	surfacearea=4*3.14*n*n;
	volume=3.14*n*n*n*(4/3);
	printf("%d\n%.2f",surfacearea,volume);
	return 0;
}