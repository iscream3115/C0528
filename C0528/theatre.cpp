#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printSeat(int arr[][10]);
void reservation(char string[3],int arr[][10]);


int main()
{

	int seat[5][10] = { 0 };
	char input[3];


	printf("---------------------------\n");
	printf("��ȭ�� �¼� ���� �ý���\n");
	printf("---------------------------\n");


	printf("00�� 00�� �� 1�� �¼� ��ġ�� �Դϴ�.\n\n\n\n");

	printSeat(seat);

	printf("\n���Ͻô� �¼��� �Է����ּ���.\n>");
	scanf("%s", input);

	reservation(input, seat);

	printSeat(seat);

	printf("\n������ �Ϸ�Ǿ����ϴ�.\n");


	return 0;
}

void printSeat(int arr[][10])
{
	char row = 'a';

	printf("\t   S C R E E N\n\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%3d", i + 1);
		if (i == 4) printf("\t");
	}
	printf("\n--------------------------------\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == 1) printf("  X");
			else printf("%3d", arr[i][j]);
			if (j == 4) printf("\t");
		}
		printf("  %c", row++);
		printf("\n");
	}
}

void reservation(char string[3], int arr[][10])
{
	int seatX = 0, seatY = 0;

	seatY = atoi(&string[1]);
	seatX = string[0] - 97;

	arr[seatX][seatY-1] = 1;

}
