//最初のアルゴリズム授業のプログラム
//最初に数字以外を入れてもプログラムが実行されてしまうバグがある。
//訂正はalgorithm-2.cに

#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
}CELL;
int main (void){
    int data;
    CELL *root;
    CELL *p;
    scanf("%d",&data);

    root= (CELL*)malloc(sizeof(CELL));
    root -> value = data;
    root -> next = NULL;

    p = root;
    scanf("%d",&data);
    while(data > 0){
        p -> next =(CELL*)malloc(sizeof(CELL));
        p = p -> next;
        p -> value = data;
        scanf("%d",&data);
    }
    p -> next = NULL;
    for(p = root; p!= NULL;p=p->next){
        printf("%d\n",p->value);
    }
    return 0;
}

