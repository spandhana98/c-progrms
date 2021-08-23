#include<stdio.h>
#include<string.h>
void mystrrchr(char *s,const char ch)
{
	int i;
	int index=-1;
	for(i=0;*s!='\0';i++,s++)
	{
		if(*s==ch)
		{
			index=i;
		}
	}
	if(index==-1)
		printf("we havent found the element\n");
	else
	{
		printf("found at indext %d",index+1);
		
	}
}

int main()
{
	char str[100];
	char ch;
	printf("enter the string\n");
	fgets(str,100,stdin);
	printf("enter the charecter\n");
	scanf("%c",&ch);
	mystrrchr(str,ch);
	//printf("%s\n",mystrrchr(str,ch));
}
