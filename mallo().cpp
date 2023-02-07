#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	//memory creation
	ptr=(int*)malloc(5*sizeof(int));
	//NULL check operation
	if(ptr!=NULL){
		printf("Memory allocated successfully\n");
	}
	  //assigning the value
	  *(ptr+0)=10;
	  *(ptr+0)=20;
	  *(ptr+0)=30;
	  *(ptr+0)=40;
	  *(ptr+0)=50;
	  
	  //display output
	  printf("%d\n",*(ptr+0));
	  printf("%d\n",*(ptr+1));
	  printf("%d\n",*(ptr+2));
	  printf("%d\n",*(ptr+3));
      printf("%d\n",*(ptr+4));
      
      return 0;
	  
}
