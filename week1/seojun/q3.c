#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

void compare(char *str1, char *str2);

int main(void)
{
    char *str1, *str2;
    str1 = (char *)calloc(N, sizeof(char));
    str2 = (char *)calloc(N, sizeof(char));

    scanf("%s", str1);
    scanf("%s", str2);

    compare(str1, str2);
    return 0;
}

void compare(char *str1, char *str2)
{
    for (int i = 0; i < N; i++)
    {
        if ((str1[i] == '\0') && (str2[i] == '\0'))
            break;
        
        if (str1[i] == str2[i])
            printf("같은 글자: %c, 위치: %d\n", str1[i], i);
    }
}
