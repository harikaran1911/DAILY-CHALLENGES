#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf((a>b && a>c)?"a is greater":(b>c)?"b is greater":"c is greater");
	return 0;
}