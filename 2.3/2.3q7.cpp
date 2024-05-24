#include<stdio.h>
int main(){
	
	int base;
	int height;
	printf("Enter The Value of Base and Height :- ");
	scanf("%d%d",&base,&height);
	float sum;
	sum = 0.5 * base * height;
	
	printf("Triangle = %.2f",sum);
	
	
}