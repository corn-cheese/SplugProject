#include <stdio.h>
#include <string.h>

int main() {
    char buffer[80];
    char *p = buffer;
    unsigned long len;
    
    printf("Input String : ");
    scanf("%s", buffer);
    
    len = strlen(p);
    
    while (*p) { p++; }

    printf("Inverse String : ");

    for (int i = 0; i < len; i++) {
        p--;
        putchar(*p);
    }
    putchar('\n');
}