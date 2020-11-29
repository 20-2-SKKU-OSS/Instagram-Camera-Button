#include <stdio.h>

int main()
{
	int kor, english, math;
	int sum=0;

	math=80;
	english=100;
	kor=90;
	sum = math +english+kor;

	printf("This program print report card.\n");

	printf("Korean : %d\nEnglish : %d\nMath : %d\n", kor, english, math);
	printf("Sum : %d\n", sum);
	printf("The End\n");

	return 0;
}
