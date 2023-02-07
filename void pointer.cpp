#include<stdio.h>
int main()
{
	int i=100;
	char ch='@';
	void *ptr=&i;
	printf("%d",(int*)ptr);
	return 0;
}
