#include <stdio.h>
//1번

void rev(char a[])
{
        int j = 0;
        char temp;
        while (1){
                if (a[j] == '\0')
                        break;
                j++;
        }
        for (int i = 1; i-1 < j/2; i++)
        {
                temp = a[i-1];
                a[i-1] = a[j-i];
                a[j-i] = temp;
        }
        return;
}

//2번

void change(char a[], char b[])
{
        int j = 0, k = 0;
        char temp;
        while (1){
                if (a[j] == '\0')
                        break;
                j++;}
        while (1){
                if (b[k] == '\0')
                        break;
                k++;}

        if (j != k){
                printf("두 문자열의 길이가 같지 않습니다.\n");
                return;}

        for (int i = 0; i < j; i++){
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;}
        return;
}

//3번

void ch_same(char a[], char b[])
{
        for (int i = 0; i <20; i++)
        {
                if ((a[i] == '\0') || (b[i] == '\0'))
                        return;
                if (a[i] == b[i])
                        printf("같은 글자 : %c, 위치 : %d\n", a[i], i);
        }
        return;
}

int main(void)
{
    return 0;
}