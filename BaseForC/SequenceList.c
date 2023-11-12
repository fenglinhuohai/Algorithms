#include <stdio.h>
#include <stdlib.h>
#define LIST_INIT_SIZE 100
#define OK 1
#define OVERFLOW -2
typedef int ElemType;
typedef int status;
typedef struct {
    ElemType* elem;
    int length;
}SqList;

int main(){

    SqList SqList;
    return 0;
}
// 初始化顺序表
status initList_sq(SqList* list){
    list->elem = malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if(!list->elem)
        exit(OVERFLOW);
    list->length = 0;
    return OK;
}