#include<stdio.h>
int main(){
	int a;
	char b[10];
	scanf("%d",&a);
	printf("roll no:%d\n",a);
	scanf("%[^\n]",&b);
	printf("name:%s",b);
	return 0;
}