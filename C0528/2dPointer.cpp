#include <stdio.h>


int main()
{
	int arr[1][3] = { 0 };
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 4,5,6 };
	int arr3[3] = { 7,8,9 };

	int arr4[3][3] = { {10,11,12},{13,14,15},{16,17,18} };

	int* ptrArr[3];

	ptrArr[0] = arr1;
	ptrArr[1] = arr2;
	ptrArr[2] = arr3;


	//arr의 첫번째 주소를 가리키는 방식들
	printf("%p\n", arr);
	printf("%p\n", *arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr);
	printf("%p\n", &arr[0][0]);
	printf("\n");

	//arr2의 두번째 원소 5의 주소값

	printf("%p\n", &ptrArr[1][1]);
	printf("%p\n", (*(ptrArr + 1)+1));
	printf("\n");

	// arr4의 '17' 출력하기

	for (int i = 0; i < 3; i++) ptrArr[i] = arr4[i];

	printf("%d\n", arr4[2][1]);
	printf("%d\n", *(*(arr4 + 2)+1));
	printf("%d\n", ptrArr[2][1]);
	printf("%d\n", *(*(ptrArr + 2) + 1));

	return 0;
}