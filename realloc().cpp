#include<stdio.h>
int main()
{
	int *ptr;{
			ptr=(int*)malloc(5*sizeof(int)); // 20 bytes created
	
	ptr=(int*)realloc(2*sizeof(int)); //8 bytes
	
	ptr=(int*)malloc(ptr,6*sizeof(int)); //24 bytes
	 		
	}
	
	 return 0;
}
