//윈도우 visual studio에서 제작됨.

#pragma warning(disable : 4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    char value;
    struct node* ptr;
} NODE;

void StringReverse(void);

int main(void)
{
    StringReverse();

    return 0;
}

void StringReverse(void)
{
    //변수 선언
    int tmp; //입력받은 문자를 임시로 저장할 변수
    int char_len = 0; //문자열의 길이를 저장할 변수
    NODE* ptr_head = NULL; //linked list의 head 포인터
    NODE* ptr_tail = NULL; //linked list의 tail 포인터


    //임의의 문자열 입력받기
    while (1)
    {
        tmp = getch();

        if ((tmp == '\r') || (tmp == '\n'))
        {
            if (ptr_head == NULL)
            {
                printf("\n아무 문자도 입력되지 않았습니다.\n");
                return;
            }

            break;
        }
        else
        {
            printf("%c", tmp);

            char_len++;
            
            if (ptr_head == NULL)
            {
                ptr_head = (NODE*)malloc(sizeof(NODE));
                if (ptr_head == NULL)
                {
                    printf("\n메모리 할당 실패\n");
                    return;
                }

                ptr_tail = ptr_head;
                ptr_tail->ptr = NULL;

                ptr_tail->value = tmp;
            }
            else
            {
                ptr_tail->ptr = (NODE*)malloc(sizeof(NODE));
                if (ptr_tail->ptr == NULL)
                {
                    printf("\n메모리 할당 실패\n");
                    return;
                }

                ptr_tail = ptr_tail->ptr;
                ptr_tail->ptr = NULL;

                ptr_tail->value = tmp;
            }
        }
    }


    //문자열 반대로 출력하기
    printf("\n");

    NODE* ptr_tmp = NULL; //사용할 NODE의 주소를 임시로 저장할 변수

    for (int i = (char_len - 1); i > 0; i--)
    {
        ptr_tmp = ptr_head;

        for (int j = 0; j < i; j++)
        {
            ptr_tmp = ptr_tmp->ptr;
        }

        printf("%c", ptr_tmp->value);
    }
    
    printf("%c", ptr_head->value);


    //할당한 메모리 반납하기
    NODE* ptr_free_alive = ptr_head;
    NODE* ptr_free_dead = NULL;

    while (1)
    {
        ptr_free_dead = ptr_free_alive;
        ptr_free_alive = ptr_free_alive->ptr;
        free(ptr_free_dead);

        if (ptr_free_alive == ptr_tail)
        {
            free(ptr_tail);

            break;
        }
    }

    return;
}