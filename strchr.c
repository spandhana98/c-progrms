#include<stdio.h>
char *my_strchr(char *s,const char c)
{
	while(*s!=c && *s!='\0')
	{
		s++;
	}
	if(*s==c)
	{
		return s;
	}
	else
	{
		return NULL;
	}



}
int main()
{
	char a[50];
	//char a[50]="hello world";
	char ch;
	printf("enter the string\n");
	//gets(a);
	//scanf("%s",a);
	fgets(a,20,stdin);

	printf("enter the charecter to search\n");
	scanf("%c",&ch);

	//printf("%s\t",my_strchr(str,ch));*/
	printf("%s\n",my_strchr(a,ch));
}
