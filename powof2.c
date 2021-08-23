#include<stdio.h>
void pow2(int num)
{
	if((num & (num-1)) ==  0)
		printf("power of 2\n");
	else
		printf("not power of 2\n");
}
int main()
{
	int n;
	printf("enter the element\n");
	scanf("%d",&n);
	pow2(n);
	return 0;
}
	
	
