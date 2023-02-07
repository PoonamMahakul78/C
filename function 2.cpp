#include<stdio.h>
float cal();
float cal(){
	int
	p=50,c=60,m=40,e=60,i=80,b=80,totalmark;
	float avgmark;
	totalmark=p+c+m+e+i+b;
	avgmark=totalmark/6;
	printf("total mark is %d\n",totalmark);
	return avgmark;
}
int main(){
	float data;
	data=cal();
	printf("avg mark is %f",data);
	return 0;
}

