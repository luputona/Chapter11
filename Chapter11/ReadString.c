#include <stdio.h>

void main4()
{
	char str[50] = {0,};
	int idx = 0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));

	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

}