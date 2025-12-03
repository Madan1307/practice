#include "list.h"
#include<iostream>
using namespace std;

NODE *insert_front(int ele,NODE* first){
    NODE *temp = new NODE;
    temp->data=ele;
    temp->link=first;
    return temp;
}
NODE *insert_rear(int ele,NODE *first){
    NODE *temp = new NODE;
    temp->data=ele;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    NODE *tempp=first;
    while(tempp->link!=NULL){
        tempp=tempp->link;
    }
    tempp->link=temp;
    return first;
    }
NODE *del_front(NODE *first){
    if(first==NULL){
        cout << "nothing to delete " << endl;
        return first;
    }
    NODE *tempp = first;
    first = first->link;
    cout << "the deleted element is " << tempp->data << endl;
    delete tempp;
    return first;
}    
NODE *del_rear(NODE *first){
    NODE *pre = NULL,*cur= NULL;
    if(first==NULL){
        cout << "nothing to delete " << endl;
        return first;
    }
    if(first->link==NULL){
        cout << "the deleted node is " << first->data << endl;
        delete first;
        return NULL;
    }
    cur=first;
    while(cur->link!=NULL){
        pre=cur;
        cur=cur->link;
    }
    cout << " the deleted element is " << cur->data << endl;
    pre->link=NULL;
    delete cur;
    return first;
}
NODE *ins_mid(int ele, int key,NODE *first){
    NODE *temp=NULL;
    
    if(first==NULL){
        cout << "noting to delete " << endl;
        return NULL;
    }
    temp=first;
    while(temp!=NULL){
        if(temp->data==key){
             NODE *neww = new NODE;
             neww->data=ele;
             neww->link=temp->link;
             temp->link=neww;
             return first;
        }
        temp=temp->link;
    }
    cout << " key doesnt exist !!! " << endl;
    return first;
}
void traverse(NODE *first){
    cout << "the nodes are :" << endl;
    NODE *temp=first;
    while(temp!=NULL){
        cout << temp->data << "\t" << endl;
        temp=temp->link;
    }
}

