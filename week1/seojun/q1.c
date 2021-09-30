#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

void strR(char *s);

int main(void)
{
    char *input;
    input = (char *)calloc(N, sizeof(char));

    printf("input : ");
    scanf("%s", input);

    strR(input);
    printf("output : %s\n", input);
    
    free(input);

    return 0;
}

void strR(char *s)
{
    int i = strlen(s)-1, j = 0;
    char tmp[N];
    strcpy(tmp, s);
    for (i; i > -1; i--)
    {
        s[j] = tmp[i];
        j++;
    } 
}
