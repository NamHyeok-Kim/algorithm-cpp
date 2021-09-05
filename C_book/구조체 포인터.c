#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 20061020, "±è³²Çõ", 2.5 };
	struct student* p;

	p = &s;

	printf("%d   %s   %f   \n", s.number, s.name, s.grade);
	printf("%d   %s   %f   \n", (*p).number, (*p).name, (*p).grade);
	printf("%d   %s   %f   \n", p->number, p->name, p->grade);
}