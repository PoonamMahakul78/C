#include<stdio.h>
int main()
{
	int num=2,i=1,factor=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
	      factor++;
		}
	}
	 if(factor==2)
	 {
	 	printf("prime number");
	 }
	  else
	  {
	  	printf("not a prime number");
	  }
	  return 0;
}
