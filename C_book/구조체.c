#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;

	s.number = 20303;
	strcpy(s.name, "±è³²Çõ");
	s.grade = 4.3;

	printf("ÇĞ¹ø : %d\n", s.number);
	printf("ÀÌ¸§ : %s\n", s.name);
	printf("ÇĞÁ¡ : %f\n", s.grade);
}