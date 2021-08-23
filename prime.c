#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter the name\n");
	scanf("%d",&n);
	if(n<=1)
		printf("not prime\n");
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("not prime\n");
	}
	else
		printf("prime\n");
}
