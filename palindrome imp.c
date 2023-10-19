#include<stdio.h>
int main()
{
	int i,j,k,g;
	char str1[10],str2[10];
	printf("Enter a name:");
	scanf("%s",str1);
	i=0;
	while(str1[i]!='\0')
	i++;
	j=i-1;
	k=0;
	while(j>=0)
	{
		str2[k]=str1[j];
		j--;
		k++;
	}
	str2[k]='\n';
	printf("length of a string is %d",i);
	printf("reverse string is %s",str2);
	g=0;
	j=0;
	while(j<i)
	{
		if(str1[j]!=str2[i])
		{
			g=1;
			break;
		}
		else
		j++;
	}
	if(g==1)
	printf("the given string is a palindrome");
	else
	printf("the given string is not a palindrome");
	return 0;
}
