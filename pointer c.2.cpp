//swaping of two numbers by using call by value
#include<stdio.h>
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swaping inside swap function a=%d,b=%d\n",a,b);
}
int main()
{
	int a=10,b=20;
	swap(a,b);
	printf("After swaping inside main function a=%d,b=%d\n",a,b);
	return 0;
}
