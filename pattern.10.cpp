#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=4;a++){
		for(i=1;i<=5;i++){
			if(a%2==0){
				printf("*\t");
			}
			 else if(a%21==0){
			 	printf("1\t");
			 }
		}
		 printf("\n");
	}
	 return 0;
}
