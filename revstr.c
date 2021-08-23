#include<stdio.h>
#include<string.h>
char *myrev(char *s)
{
	int i,j,l;
	char temp;
	l=strlen(s);
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	return s;
}
char *rev(char *s)
{
	static int i=0;
	static char r[100];
	if(*s)
	{
		rev(s+1);
		r[i++]=*s;
	}
	return r;
}
int main()
{
	char str[100];
	printf("enter the string\n");
	fgets(str,100,stdin);

	printf("%s",myrev(str));
	printf("%s",rev(str));
}


