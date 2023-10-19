#include<stdio.h>
int main()
{
	int n,pos,d,i,m,p;
	int a[10];
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter element one by one:");
	for(i=0;i<n;i++)
	scanf("%d",&n);
	printf("Enter a element to be insert:");
	scanf("%d",&n);
	printf("Enter a position:");
	scanf("%d",&pos);
	p=pos-2;
	m=n-1;
	for(i=m;i>p;i--)
	{
		a[i+1]=a[i];
	}
	a[i]=d;
	return 0;
}
