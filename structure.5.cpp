//WAP to using structure take 2 pointers and calculate the distance between then
#include<stdio.h>
struct distance{
	int ptr,qtr;
}d;
int main()
{
	int a=34;
	d.ptr=&a;
	int b=23;
	d.qtr=&b;
	printf("Address of a is %u\n",&a);
	printf("Address of b is %u\n",&b);
	printf("Distance between them is %d bytes",(d.ptr-d.qtr));
	
	return 0;
	
}
