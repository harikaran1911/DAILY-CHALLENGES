#include<stdio.h>
int main(){
	int amount,discount,finalamount;
	printf("enter the amount:");
	scanf("%d",&amount);
	printf("enter the discount:");
	scanf("%d",&discount);
	finalamount=amount-(amount/100*discount);
	printf("the final amount is %d",finalamount);
	return 0;
}