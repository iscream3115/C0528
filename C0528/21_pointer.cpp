#include <stdio.h>


void pointer_2dArr();

int main()
{
	/*int arr0[3] = { 10,20,30 };
	int arr1[3] = { 40,50,60 };*/

	int* ptrArr[3];


	int myArr[2][3] = { {1,2,3},{4,5,6} };


	ptrArr[0] = myArr[0];
	ptrArr[1] = myArr[1];


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d %d %d %d 0x%p 0x%p\n",myArr[i][j], ptrArr[i][j], *(ptrArr[i] + j), *(*(ptrArr + i) + j), &myArr[i][j],&ptrArr[i][j] );

		}


	}




	pointer_2dArr();


	return 0;
}

void pointer_2dArr()
{
	float arr[2][4] = { {1.0f,2.0f,3.0f,4.0f},{5.0f,6.0f,7.0f,8.0f} };

	printf("&arr[0][0] : 0x%p\n", arr);
	printf("&arr[0][0] : 0x%p\n", &arr[0][0]);
	printf("&arr[0][0] : 0x%p\n", arr[0]);

	printf("\n&arr[0][0] : 0x%p\n", *arr); // &arr[0] == *arr
	printf("&arr[0][0] : 0x%p\n", &arr[0]); // arr[0] == &arr[0]

	//값을 출력하는 방법
	printf("\n&arr[0][0] : %f\n", **arr);



}
