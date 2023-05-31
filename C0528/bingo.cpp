#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffleArray(int arr[], int size);
void printGrid(int grid[][5]);
int checkBingo(int grid[][5]);

int main()
{
    int bingo[5][5];
    int num[25];
    int bingoNum = 0;
    int input = 0;

    for (int i = 0; i < 25; i++) 
    {
        num[i] = i + 1;
    }

    shuffleArray(num, 25);

    // ���� ���ڸ� 5x5 �׸��忡 ����
    int index = 0;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            bingo[i][j] = num[index];
            index++;
        }
    }

    printGrid(bingo);

    while (bingoNum < 3)
    {
        printf("���ϴ� ���ڸ� �Է�(1~25����): ");
         scanf("%d",&input);

         for (int i = 0; i < 5; i++)
         {
             for (int j = 0; j < 5; j++)
             {
                 if (bingo[i][j] == input)
                 {
                     bingo[i][j] = 'X';
                     break;

                 }
             }
         }

         printGrid(bingo);

         bingoNum = checkBingo(bingo);

         printf("���� ����: %d\n", bingoNum);
    }

    return 0;
}

void shuffleArray(int arr[], int size) 
{
    srand((unsigned int)time(NULL));

    for (int i = size - 1; i > 0; i--) 
    {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printGrid(int grid[][5]) 
{
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (grid[i][j] > 25) printf("X\t");
            else printf("%d\t", grid[i][j]);
        }
        printf("\n");
    }
}

int checkBingo(int grid[][5])
{
    int count = 0;
    int totalBingo = 0;

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (grid[i][j] > 80) count++;
        }
        if (count == 5) totalBingo++;
        count = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (grid[j][i] > 80) count++;
        }
        if (count == 5) totalBingo++;
        count = 0;
    }

    return totalBingo;


}
