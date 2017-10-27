#include <stdio.h>

void main4()
{
	char str[50] = {0,};
	int idx = 0;

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));

	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

}