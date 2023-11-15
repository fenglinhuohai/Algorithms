#include <stdio.h>
#include <stdlib.h>

#define Book_Max_Numbers 1000
typedef struct{
    char name[100];
    float price;
}Book;

typedef struct {
    Book* books;
    int length;
}SqList;

void initSqList(SqList *sqList){
    sqList->books = (Book *)malloc(Book_Max_Numbers * sizeof(Book));
    sqList->length = 0;
}
int insertAnBook(SqList* sqList){
    Book book;
    printf("书名：");
    scanf("%s",&book.name);
    printf("价格：");
    scanf("%f",&book.price);
    sqList->books[sqList->length] = book;
    sqList->length++;
}
void showAllBooks(SqList* sqList){
    for(int i = 0;i < sqList->length;i++){
        printf("%s %f\n",sqList->books[i].name,sqList->books[i].price);
    }
}
void main(){
    SqList sqList;
    initSqList(&sqList);
    insertAnBook(&sqList);
    insertAnBook(&sqList);
    showAllBooks(&sqList);
}