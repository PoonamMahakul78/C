#include<stdio.h>
#include<string.h>
//structure creation
 struct std{
	int roll,mark;
	char name[20],course[20];
};

//structure creation variable
struct std s;
struct std*p=&s;
int main()
{
	p->roll=210;
	p->mark=400;
	strcpy(p->name,"Priyanka");
	strcpy(p->course,"Btech");
	printf("%d\n",p->roll);	
	printf("%d\n",p->mark);
	printf("%d\n",p->name);
	printf("%d\n",p->course);
	
	return 0;
}
