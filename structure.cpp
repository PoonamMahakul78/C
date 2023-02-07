//WAP using structure take input of student details and display it
#include<stdio.h>
struct Student{
	int rollno;
	int regd;
	char name[20];
	char course[30];
	char branch[20];
};
int main()
{
	struct Student s={25,101,"Swarna","Btech","CSE"};
	printf("Roll no is %d\n",s.rollno);
	printf("Registration no is %d\n",s.regd);
	printf("Name is %d\n",s.name);
	printf("Course no is %d\n",s.course);
	printf("Branch is %d\n",s.branch);
	return 0;
}
