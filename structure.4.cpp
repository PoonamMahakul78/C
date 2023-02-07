//WAP using structure take input a student details nd display it by using nested structurre
#include<stdio.h>
struct student{
	int id;
	char name[30];
	struct std{
		char branch[15];
		char sec[15];
	}ob;
}oj;
int main(){
	printf("Enter your id\n");
	scanf("%d",&oj.id);
	printf("Enter your name\n");
	fflush(stdin);
	gets(oj.name);
	printf("Enter your branch\n");
	fflush(stdin);
	gets(oj.ob.branch);
	printf("Enter your sec\n");
	fflush(stdin);
	gets(oj.ob.sec);
	
	printf("STUDENT DETAILS\n");
	printf("student id::%d\n",oj.id);
	printf("student id::%d\n",oj.name);
	printf("student id::%d\n",oj.ob.branch);
	printf("student id::%d\n",oj.ob.sec);
	
	return 0;
	
}
