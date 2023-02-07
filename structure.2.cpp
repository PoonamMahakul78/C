//WAP using structure take input of student and display it using nested structure
#include<stdio.h>
struct Student{
	int rollno;
	char name[20];
	struct details{
		char course[30];
		char branch[20];
	}d;
};
struct Student s;
int main()
{
	printf("Enter student rollno\n");
	scanf("%d",&s.rollno);
	printf("Enter student name\n");
	fflush(stdlin)
	gets(s.name);
	
	printf("Enter student course\n");
	fflush(stdlin);
	gets(s,d.course);
	printf("Enter student branch\n");
	gets(s,d.branch);
	
	printf("Student information\n");
	printf("Student rollno is %d\n",s.rollno);
	printf("Student name is %s\n",s.name);
	printf("Student course is %s\n",s,d.course);
	printf("Student branch is %s\n",s,d.branch);
	
	return 0;
	
}
