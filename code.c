#include <stdio.h>

int main()
{
	int kor, english, math, science;
	int sum = 0;

	math = 80;
	english = 100;
	kor = 90;
	science= 70;
	sum = math + english + kor + science;

	printf("This is a program that can print a report card.\n");

	printf("Grades are as follow: Science: %d\nKorean : %d\nEnglish : %d\nMath : %d\n", science, kor, english, math);
	printf("Sum : %d\n", sum);
	printf("Average: %f\n\n",(kor+english+math+science)/4.0);

	printf("The End\n");


	return 0;
}
