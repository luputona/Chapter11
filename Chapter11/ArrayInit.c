#include<stdio.h>

void main2()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,6,7};
	int arr3[5] = { 1,2 };
	int arr1Lenght = 0;
	int arr2Lenght = 0;
	int arr3Lenght = 0;
	int i;

	printf("�迭 arr1�� ũ�� : %d \n",sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

	arr1Lenght = sizeof(arr1) / sizeof(int);
	arr2Lenght = sizeof(arr2) / sizeof(int);
	arr3Lenght = sizeof(arr3) / sizeof(int);

	for (i = 0; i< arr1Lenght; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");

	for (i = 0; i< arr2Lenght; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");

	for (i = 0; i< arr3Lenght; i++)
	{
		printf("%d", arr3[i]);
	}
	printf("\n");
	

}