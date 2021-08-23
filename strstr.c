#include<stdio.h>
#include<string.h>
void mystrstr(char *str,char *sub,int l1,int l2);
int main()
{
	char str[100];
	char substr[100];
	int l1,l2;
	printf("enter the string\n");
	fgets(str,100,stdin);
	printf("enter the substr\n");
	fgets(substr,100,stdin);
        l1=strlen(str);
	l2=strlen(substr);
	mystrstr(str,substr,l1,l2);
}
void mystrstr(char str[100],char sub[100],int a,int b)
{
	int i,j;
	/*for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(str[i+j]!=sub[j])
			{
			  break;
			}
		}
		if(j==b)
		printf("present at %d\n",i+1);
	}
		printf("not found\n");*/
	for(j=0;j<=a-b;j++)
	{
		for(i=0;i<b && (sub[i]==str[i+j]);++i);
		if(i>=b)
		{
			printf("found at %d",j);
		}
	}

}


