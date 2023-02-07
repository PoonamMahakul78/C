//using pointer check a number is even or odd
#include<stdio.h>
int main()
{
	int num=60,*ptr;
	ptr=&num;
	if(*ptr%2==0){
		printf("Even number");
	}
	else{
		printf("Odd number");
	}
	 return 0;
}
