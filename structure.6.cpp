#include<stdio.h>;
struct employee{
	int eid;
	char ename[30];
	float esal;
};
struct employee e;
int main()
{
	//print address of all the element of structure
	printf("******Printing Address******\n");
	printf("%u\n",&e);
	printf("%u\n",&e.eid);
	printf("%u\n",&e.eid);
	printf("%u\n",&e.eid);
	return 0;
}
