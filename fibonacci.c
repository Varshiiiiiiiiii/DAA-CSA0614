#include<stdio.h>
int main()
{
	int n,i,f1,f2,f3;
	f1=1,f2=-1;
	printf("enter a series:");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		f3=f1+f2;
		printf("%d",f3);
		f1=f2;
		f2=f3;
		i++;
	}
	return 0;
}
