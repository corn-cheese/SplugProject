//윈도우 visual studio에서 제작됨.

#pragma warning(disable : 4996)

#include <stdio.h>
#include <string.h>

#define	ARRAY_LENGTH 20

void StringExchg(char* ptr1, char* ptr2);

int main(void)
{
	//문자열 입력받기
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

	StringExchg(a, b);

	//바뀐 문자열 출력하기
	printf("\na: %s\nb: %s\n", a, b);

	return 0;
}

void StringExchg(char* ptr1, char* ptr2)
{
	char tmp;
	
	for (int i = 0; i < (int)strlen(ptr1); i++)
	{
		tmp = ptr1[i];
		ptr1[i] = ptr2[i];
		ptr2[i] = tmp;
	}

	return;
}