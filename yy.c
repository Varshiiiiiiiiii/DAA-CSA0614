#include<stdio.h>
int main()
{
	int n,m,s,i,j,k,l,a;
	printf("Enter a number of row:");
	scanf("%d",&n);
	a=n;
	m=n-1;
	l=1;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=l;j++)
		printf(" ");
		l++;
		s=(a*(a+1))/2;
		s++;
	}
	for(k=1;k<=a;k++)
	{
		printf("%d",s);
		s++;
	}
	printf("\n");
	a--;
	return 0;
}
