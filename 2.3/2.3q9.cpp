#include<stdio.h>
int main(){
	
	int a;
	int b;
	printf("Enter The Value Of a and b :- ");
	scanf("%d%d",&a,&b);
	int sum = a*a - 2*a*b + b*b ;
	
	printf("%d",sum);
	
}