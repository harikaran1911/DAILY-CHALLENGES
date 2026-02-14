#include<stdio.h>
int main(){
	int n,lastdigit,firstdigit,sum;
	scanf("%d",&n);
	lastdigit=n%10;
	firstdigit=(n/10)/10;
	sum=lastdigit+firstdigit;
	printf("%d",sum);
	return 0;
}