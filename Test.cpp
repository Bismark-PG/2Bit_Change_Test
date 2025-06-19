#include "Test.h"

void test(int x, int y)
{
	printf("Welcome to 16bit for 2bit changer.\n\n");
	printf("First number is [0x%x]\n", x);
	printf("Second number is [0x%x]\n\n", y);
	printf("Here is your first test.\n");
	printf("Please answer 16bit. (skip 0x)\n\n");
}
int Seed_Rand(unsigned int* x, unsigned int* y)
{
	int a = 0;	int b = 0;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		switch (i)
		{
		case 0:
		case 3:
			*x *= 10;
			a = rand() % 4 + 1;
			*x += a;
			*y *= 10;
			b = rand() % 4 + 1;
			*y += b;
			break;
		case 1:
		case 7:
			*x *= 10;
			a = rand() % 3;
			*x += a;
			*y *= 10;
			b = rand() % 3;
			*y += b;
			break;
		case 5:
			*x *= 10;
			a = rand() % 7;
			*x += a;
			*y *= 10;
			b = rand() % 7;
			*y += b;
			break;
		case 6:
			*x *= 10;
			a = rand() % 8;
			*x += a;
			*y *= 10;
			b = rand() % 8;
			*y += b;
			break;
		case 9:
			*x *= 10;
			a = rand() % 6;
			*x += a;
			*y *= 10;
			b = rand() % 6;
			*y += b;
			break;
		default:
			*x *= 10;
			a = rand() % 10;
			*x += a;
			*y *= 10;
			b = rand() % 10;
			*y += b;
			break;
		}
	}
	return 0;
}
int Score_Count(int answer, int* seikai, int* score)
{
	if (answer == *seikai)
	{
		good();
		*score += 1;
	}
	else
	{
		bed();
	}
	return 0;
}
void good()
{
	printf("Good Job!\n");
}
void bed()
{
	printf("Bed answer!\n");
	printf("Try again!\n");
}
void Test_end(int score)
{
	printf("\nWell done!\n");
	printf("Test is over.\n");
	printf("Full score is 10!\n");
	printf("Your score is %d/10!\n", score);

	if (score >= 8)
	{
		printf("You are a master of bit operations!\n");
	}
	else if (score >= 5)
	{
		printf("You have a good understanding of bit operations.\n");
	}
	else
	{
		printf("Keep practicing bit operations!\n");
	}
}