#include <stdio.h>

int main()
{
	int kor, english, math;
	int sum = 0;

	math = 80;
	english = 100;
	kor = 90;
	sum = math + english + kor;

	printf("This is a program that can print a report card.\n");

	printf("Grades are as follow:   Korean : %d\nEnglish : %d\nMath : %d\n", kor, english, math);
	printf("Sum : %d\n", sum);
	printf("Average: %f\n\n",(kor+english+math)/3.0);
	printf("The End\n");

	return 0;
}
