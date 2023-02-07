#include<stdio.h>
int main()
{
	int i,a,s;
	for(a=1;a<=5;a++){
		for(s=4;s>=a;s--){
			printf(" ");
		}
		 for(i=1;i<=a;i++){
		 	printf("1");
		 }
		   printf("\n");
	}
	 return 0;
}
