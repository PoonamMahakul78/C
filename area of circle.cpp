#include<stdio.h>
float circle();
float circle()
{
	int r=5;
	float pai=3.141;
	return r*r*pai;
}
  int main()
  {
  	float result;
  	result=circle();
  	printf("area or cicle=%f",result);
  	return 0;
  }
