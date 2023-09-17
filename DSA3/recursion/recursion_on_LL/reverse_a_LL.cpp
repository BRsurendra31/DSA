#include<iostream>
using namespace std;

void print(node* head){
    // bc
    if(head == Null){
        return;
    }
    cout<<head->next;
    //rc
    print(head->next);
}



int main(){
    Node* head = Null;
    Node* tail = Null;

    Node* root = new Node(5);
    insertAtTail(tail, 3);
    print(head);    
    
    
    return 0;
}