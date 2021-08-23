#include<stdio.h>

#define SIZEOF(X)       ((char *)(&x+1)-(char *)&x)
void pow4(int num)
{
	
	if((num &(num-1))==0)
	{
		int c=0;
		while((num & 1)==0)
		{
			c=c+1;
			num=num>>1;
		}
	
	if((c%2)==0)
		printf("power of 4\n");
	else
		printf("not power of 4\n");
	}
	else
		printf("not power of 4\n");
        
}

void rev(int n)
{
	int i,j;
	for(i=0,j=7;i<j;i++,j--)
	{
		if((n & (1<<i))!=((n &(1<<j))))
		{
			n=n^(1<<i);
		        n=n^(1<<j);
		}
	}
	printf("%u\n",n);
}

void nibbleswap(int n)
{
	n=(((n & 0x0f)<<4)|((n & 0xf0)>>4));
	printf("%u\n",n);
}



int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	pow4(n);
	rev(n);
	nibbleswap(n);
	printf("%d",SIZEOF(X));
	return 0;
}

