#define _CRT_SECURE_NO_WARNINGS
#include "Test.h"

int main()
{
	srand((unsigned) time(nullptr));

	int mon1, mon2, mon3, mon4, mon5, mon6, mon7, mon8;
	mon1 = rand() % 10 + 1;
	mon2 = rand() % 10 + 1;
	mon3 = rand() % 10 + 1;
	mon4 = rand() % 10 + 1;
	mon5 = rand() % 12 + 4;
	mon6 = rand() % 15 + 6;
	mon7 = rand() % 8 + 1;
	mon8 = rand() % 20 + 10;
	// if you wnat to change monndai range
	// please change "n" >> rand() "% n + 1"

	char quest[20] = { "\nNext test!\n" };
	int score = 0;
	int answer = 0;
	int* P_score = &score;

	unsigned int x, y;
	x = 0;	y = 0;
	unsigned int* px = &x;
	unsigned int* py = &y;
	Seed_Rand(px, py);

	int Question[10] = {};
	int* P_Question = Question;

	int a = 0, b = 0, c = 0, d = 0;
	a = x << mon5;
	b = y >> mon6;
	c = y << mon7;
	d = x >> mon8;
	int alpha = a & b;
	int beta = c & d;
	int gamma = alpha | beta;
	int sigma = ~gamma;

	test(x, y);
	for (int i = 0; i < 10; i++)
	{
		switch (i)
		{
		case 0:
			Question[i] = x & y;
			printf("What is X & Y?\n");
			scanf("%x", &answer);
			break;
		case 1:
			Question[i] = x | y;
			printf("What is X | Y?\n");
			scanf("%x", &answer);
			break;
		case 2:
			Question[i] = x ^ y;
			printf("What is X ^ Y?\n");
			scanf("%x", &answer);
			break;
		case 3:
			Question[i] = ~x;
			printf("What is ~ X?\n");
			scanf("%x", &answer);
			break;
		case 4:
			Question[i] = ~y;
			printf("What is ~ Y?\n");
			scanf("%x", &answer);
			break;
		case 5:
			Question[i] = x << mon1;
			printf("What is X << %d?\n", mon1);
			scanf("%x", &answer);
			break;
		case 6:
			Question[i] = x >> mon2;
			printf("What is X >> %d?\n", mon2);
			scanf("%x", &answer);
			break;
		case 7:
			Question[i] = y << mon3;
			printf("What is Y << %d?\n", mon3);
			scanf("%x", &answer);
			break;
		case 8:
			Question[i] = y >> mon4;
			printf("What is Y >> %d?\n", mon4);
			scanf("%x", &answer);
			break;
		case 9:
			Question[i] = sigma;
			printf("What is ~ [(X << %d & Y >> %d) | (Y << %d & X >> %d)]?\n", mon5, mon6, mon7, mon8);
			scanf("%x", &answer);
			break;
		}
		getchar();
		Score_Count(answer, P_Question, P_score);
		if (i == 9)
		{
			break;
		}
		printf("%s", quest);
	}
	Test_end(score);

	getchar();
	return 0;
}
