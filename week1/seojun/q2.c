#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

void swap(char *a, char *b);

int main(void)
{
    char *a, *b;
    a = (char *)calloc(N, sizeof(char));
    b = (char *)calloc(N, sizeof(char));

    printf("a: ");
    scanf("%s", a);
    printf("b: ");
    scanf("%s", b);
    swap(a, b);
    printf("a: %s\nb: %s\n", a, b);
    free(a);
    free(b);
    return 0;
}

void swap(char *a, char *b)
{
    char tmp[N];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}
