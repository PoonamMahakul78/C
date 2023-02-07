#include<stdio.h>
int mul(int);
int mul(int r)
{
	int area;
	area=3.14*r*r;
	return area;
}
  int main()
  {
  	int result;
  	result=mul(35);
  	printf("area of circle %d",result);
  	return 0;
  }
