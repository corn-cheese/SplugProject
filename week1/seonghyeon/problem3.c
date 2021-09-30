#include <stdio.h>
#include <string.h>

void func(char* str1, char* str2) {
    
    unsigned long strLen = strlen(str1);
    
    for (int i = 0; i < strLen; i++) {
        if (*(str1+i) == *(str2+i)) printf("같은 글자 : %c, 위치: %d\n", *(str1+i), i);
    }
    
    
}

int main() {
    
    char* str1 = "asdhfiensdkcj";
    char* str2 = "afdqieoincacs";
    func(str1, str2);

    return 0;
}