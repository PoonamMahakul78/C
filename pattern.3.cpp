#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
	for(i=1;i<=5;i++){
		if(a==1||a==5){
			printf("O");
		}
		 else if(i==1||i==5){
		 	printf("O");
		 }
		  else{
		  	printf(" ");
		  }
		  
	}
	  printf("\n");
	}
	 return 0;
}
