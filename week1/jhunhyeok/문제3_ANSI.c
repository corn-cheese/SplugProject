//윈도우 visual studio에서 제작됨.

#pragma warning(disable : 4996)

#include <stdio.h>

#define ARRAY_LENGTH 20

void StringSelect(char *ptr1, char *ptr2);

int main(void)
{
	char a[ARRAY_LENGTH], b[ARRAY_LENGTH];
	printf("a: ");
	if (scanf("%s", a) != 1)
	{
		printf("\n입력 오류 발생\n");
		return 0;
	}

	printf("b: ");
	if (scanf("%s", b) != 1)
	{
		printf("\n입력 오류 발생\n");
		return 0;
	}

	printf("\n");

	StringSelect(a, b);

	return 0;
}

void StringSelect(char* ptr1, char* ptr2)
{
	for (int i = 0; i < 20; i++)
	{
		if ((ptr1[i] == 0) || (ptr2[i] == 0)) //더 이상 비교할 문자가 없는 경우.
		{
			break;
		}

		if (ptr1[i] == ptr2[i])
		{
			printf("같은 글자 : %c, 위치 : %d\n", ptr1[i], i);
		}
	}

	return;
}