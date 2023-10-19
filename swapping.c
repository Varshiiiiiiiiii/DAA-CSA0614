#include<stdio.h>
int main()
{
	//input number
	int num1,num2,t ;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	//swapping 
	t=num1;
	num1=num2;
	num2=t;
	printf("%d\n%d",num1,num2);
	return 0;
	
}
