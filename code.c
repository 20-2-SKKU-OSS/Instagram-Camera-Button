#include <stdio.h>

int main()
{
	int korean, english, math;
	int sum = 0;

	math = 80;
	english = 100;
	korean = 90;
	sum = math + english + korean;

	printf("This is a program that can print a report card.\n");

	printf("Grades are as follow:   Korean : %d\nEnglish : %d\nMath : %d\n", korean, english, math);
	printf("Sum : %d\n", sum);
	printf("Average: %f\n",(korean+english+math)/3.0);
	printf("The End\n");

	return 0;
}
