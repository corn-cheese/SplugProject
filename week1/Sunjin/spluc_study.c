#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 1��
int main(void){

    char input[64];
    printf("������ �ٲ� ���ڿ��� �Է��ϼ���: ");
    scanf("%s", input);
    
    int tmp = strlen(input);
    char final[tmp+1];
    for(int num = 0; num<=tmp; num++){
        if(num == tmp){
            final[tmp] = '\0';
        }
        else{
            final[num] = input[num];
        }
    }

    char m;

    for(int k = 0;k<=(tmp/2)-1 ;k++){
        m = final[k];
        final[k] = final[tmp-k-1];
        final[tmp-k-1] = m;
    }
   
    printf("%s", final);
}
*/
/*
//2��
int main(void){
    char s1[20] = "123456";
    char s2[20] = "qwerty";
    char *tmp;
    tmp = malloc(sizeof(char)*strlen(s1));

    strcpy(tmp, s1);
    strcpy(s1, s2);
    strcpy(s2, tmp);
    free(tmp);
    printf("%s\n", s1);
    printf("%s\n", s2);
}
*/
//3��
int main(void){
    char a[20] = "asdhfiensdkcj";
    char b[20] = "afdqieoincacs";

    for(int k = 0; k<20; k++){
        if(a[k] == '\0'){
            return 0;
        }
        else if(a[k] == b[k]){
            printf("��������: %c, ��ġ: %d\n", a[k], k);
        }
    }

}
