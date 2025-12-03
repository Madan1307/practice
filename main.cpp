#include<iostream>
#include "list.h"
using namespace std;


int main(){
    NODE *first = NULL;
    int ch,ele;
    int pos;
    
    for(;;){
        cout << "\n1.insert at the first\n2.insert at rear\n3.delete from front\n4.delete rear\n5.insert at middle \n6.Display\n7.exit"<< endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<< "enter the element to insert :" << endl;
                cin>>ele;
                first=insert_front(ele,first);
                break;
            }
            case 2:{
                cout<< "enter the element to insert :" << endl;
                cin>>ele;
                first=insert_rear(ele,first);
                break;
                
            }
            case 3:{
                first =del_front(first);
                break;
            }
            case 4:{
                first=del_rear(first);
                break;
            }
            case 5:{
                cout << "enter the element " << endl;
                cin >> ele;
                cout << "enter the key position to be inserted " << endl;
                cin >> pos;
                first = ins_mid(ele,pos,first);
                break;
            }
            case 6:{
                traverse(first);
                break;
            }
            case 7:{

                exit(0);
            }
        }
    }
    return 0;
}
