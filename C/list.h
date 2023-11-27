#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
typedef struct ListNode {
    DataType data;
    struct ListNode *next;
}Node,*List;

/*数据结构之单链表*/
// 创建节点
Node* createNode(DataType data);
//头插法
void insertHead(List* list, DataType data);
// 尾插法
void insertTail(List list, DataType data);
// 打印链表
void printList(List list);
// 删除指定节点
void deleteNode(List list, int index);

// 释放链表
void destroyList(List list);