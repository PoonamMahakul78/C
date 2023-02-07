#include<stdio.h>
int main()
{
	int *ptr;
	{
		int x=90;
		ptr=&x;
	}
	 printf("%u\n",ptr);
	 printf("%u\n",*ptr);
	 return 0;
	 
}
