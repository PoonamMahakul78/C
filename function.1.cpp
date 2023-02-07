#include<stdio.h>
void cal();

	void cal(){
		int
		p=60,c=30,m=60,e=50,i=80,totalmark;
		float avgmark;
		totalmark=p+c+m+e+i;
		avgmark=totalmark/6;
		printf("total mark is %d\n",totalmark);
		printf("avg mark is %f",avgmark);
	}
	int main(){
		cal();
		return 0;
	
}

