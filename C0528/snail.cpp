#include <stdio.h>

int main()
{
	int snail[5][5] = { 0 };

	//���� ����
	int dX[4] = { 1,0,-1,0 };
	int dY[4] = { 0,1,0,-1 };
	int x = -1, y = 0;
	int num = 1;


	printf("������ ���\n\n");


	while (num < 26)
	{

		//i�� �����ϸ鼭 ���� ��ȯ
		for (int i = 0; i < 4; i++)
		{
			x += dX[i];
			y += dY[i];

			while (!(x < 0 || x >= 5 || y < 0 || y >= 5))
			{
				if (snail[y][x] != 0)
					break;
				snail[y][x] = num++;

				x += dX[i];
				y += dY[i];
			}
			x -= dX[i];
			y -= dY[i];
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%d		", snail[y][x]);
		}
		printf("\n");
	}


	return 0;
}