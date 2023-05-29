#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffle(int arr[][5]);


int main()
{

	int bingo[5][5] = { 0 };

	srand((unsigned int)time(NULL));

	shuffle(bingo);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d		",bingo[i][j]);
		}
		printf("\n");
	}





	return 0;
}

void shuffle(int arr[][5])
{
	int src = 0, dest = 0;
	int num = 1;
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = num++;
		}

	}

	while (count < 12)
	{
		arr[rand() % 5][rand() % 5] = arr[rand() % 5][rand() % 5];
		count++;
	}





}
