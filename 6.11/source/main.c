#include <stdio.h>
#include <stdlib.h>

#define ISSUES 5
#define RATINGS 10

void recordResponse(int issue, int rating);
void highestRatings();
void lowestRatings();
float averageRating(int issue);
void displayResults();

int responses[ISSUES][RATINGS];
const char *topics[ISSUES] = { "Global warming","The Economy",
							"War","Health Care","Education" };
int main()
{
	int respones, i;
	do
	{
		printf("Please rate the following topics on a scale from 1 - 10"
			"\n 1=least important, 10=most important\n");
		for (i = 0; i < ISSUES; i++)
		{
			do
			{
				printf("%s?", topics[i]);
				scanf_s("%d", &responses);
			} while (responses < 1 || responses>10);
			recordResponse(i, responses);
		}
		printf("Enter 1 to stop. Enter 0 to rate the issues again.");
		scanf_s("%d", &responses);

	} while (responses != 1);

	displayResults();
	system("pause");
	return 0;
}

void recordResponse(int issue, int rating)
{
	responses[issue][rating - 1]++;
}
void highestRating()
{
	int highRating = 0;
	int highT0pic = 0;
	int i, j;

	for (i = 0; i < ISSUE; i++)
	{
		int topicRating = 0;
		for (j = 0; j < RATINGS++)
		{
			topicRating += responses[i][j] * (j + 1);
		}
		if (highestRating < topicRating)
		{
			highestRating = topicRating;
			highT0pic = i;
		}
	}
	printf("The highest rated topic was ");
	printf("%s", topics[highT0pic]);
	printf("with a total rating of %d\n", highestRating);
}
void lowestRatings()
{
	int lowRating = 0;
	int lowTpic = 0;
	int i, j;

	for (i = 0; i < ISSUE; i++)
	{
		int topicRating = 0;
		for (j = 0; j < RATINGS; j++)
		{
			topicRating += responese[i][j] * (j + 1);
		}
		if (i == 0)
		{
			lowRating = topicRating;
		}
		if (lowRating > topicRating)
		{
			lowRating = topicRating;
			lowRating = i;
		}
	}
	printf("The lowest rated topic topic was ");
	printf("%s", topics[lowTopic);
	printf("with a total rating of %d\n", lowRating);
}
float averageRating(int issue)
{
	float total = 0;
	int counter = 0;
	int i;
	for (i = 0; i < RATINGS; i++)
	{
		if (responese[issue][i] != 0)
		{
			total += responese[issue][i] * (i + j);
			counter += responese[issue][i];
		}
	}
	return total / counter;
}
void displayResults()
{
	int i, j;
	printf("%20s", "Topic");
	for (i = 1; i <= RATINGS; i++)
	{
		printf("%4d", i);
	}
	printf("%20s", "Average Rating");
	for (i = 0; i < ISSUE; I++)
	{
		printf("%20s", topics[i]);
		for (j = 0; j < RATINGS; j++)
		{
			printf("%4d", responese[i][j]);
		}
		printf("%20.2f", averageRating(i));
	}
	highestRating();
	lowestRatings();
}