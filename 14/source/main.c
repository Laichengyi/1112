#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setofgrades[], int test);
void printarray(const int grades[][EXAMS], int pupils, int tests);


int main(void)
{
	int student;
	const int studentsgrades[STUDENTS][EXAMS] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };

	printf("the array is :\n");
	printarray(studentsgrades, STUDENTS, EXAMS);

	printf("\n\nlowest grade:%\nhighest gradw:%d\n", minimum(studentsgrades, STUDENTS, EXAMS),maximum(studentsgrades, STUDENTS, EXAMS));
	
	

	for (student = 0; student < STUDENTS; student++)
	{
		printf("the average grade for student %d is %.2f\n", student, average(studentsgrades[student], EXAMS));
	}
	system("pause");
	return 0;
}

void printarray(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;

	printf("         [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d}]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}
int minimum(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}
int maximum(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int highGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}
	return highGrade;
}
double average(const int setofgrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++) 
	{
		total += setofgrades[i];
	}
	return(double)total / tests;
}