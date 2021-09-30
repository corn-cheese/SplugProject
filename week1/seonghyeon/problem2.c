#include <stdio.h>

void swap(char* str1, char* str2) {
    char* temp;
    
    temp = str1;
    str1 = str2;
    str2 = str1;
}

int main() {
    char* str1 = "123456";
    char* str2 = "qwerty";
    
    printf("%s %s", str1, str2);
    
    swap(str1, str2);
    
    printf("%s %s", str1, str2);
}
