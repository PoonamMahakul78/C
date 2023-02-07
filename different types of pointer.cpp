#include<stdio.h>
int main()
{
	int *ptr;
	{
		int x=888;
		ptr=&x;
	}
	 ptr=NULL;
	 printf("%u\n",ptr);
	 printf("%u\n",*ptr);
	 return 0;
}
	

