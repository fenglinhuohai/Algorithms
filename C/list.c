#include "list.h"


// 创建节点
Node *createNode(DataType data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        perror("Create New Node Failure!");
        exit(-2);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// 头插法
void insertHead(List* list, DataType data){
    Node *newNode = createNode(data);
    newNode->next = *list;
    *list = newNode;
}

// 打印链表
void printList(List list){
    printf("打印链表：");
    while(list != NULL) {
        printf("%d ",list->data);
        list = list->next;
    }
}
int main(){
    List list;
    list = createNode(10);
    insertHead(&list, 20);
    insertHead(&list, 30);
    printList(list);
    return 0;
}