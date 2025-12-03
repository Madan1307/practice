#ifndef LIST_H
#define LIST_H

typedef struct sll{
    int data;
    struct sll *link;
}NODE;


NODE *insert_front(int ele,NODE *first);
NODE *insert_rear(int ele,NODE *first);
NODE *del_front(NODE *first);
NODE *del_rear(NODE *first);
NODE *ins_mid(int ele, int key,NODE *first);
void traverse(NODE *first);
#endif // LIST_H
