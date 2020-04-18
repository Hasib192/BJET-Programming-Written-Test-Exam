//linked list swap first and second node
//Input: 1->2->3
//Output: 2->1->3

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

Node *swapList(Node *head){
    Node *firstNode, *secondNode;
    firstNode=head;
    secondNode=head->next;
    swap(firstNode->data, secondNode->data);
    head = firstNode;
    return head;
}

void printList(Node *head){
    Node *s = head;
    while(s!=NULL){
        cout<<s->data<<" ";
        s=s->next;
    }
}

int main(){
    int t, value;
    cin>>t;
    Node *newNode, *tmp, *head;
    for(int i=0;i<t; i++){
        cin>>value;
        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if(i==0){
            head = newNode;
            tmp = head;
        } else{
            tmp->next = newNode;
            tmp=tmp->next;
        }
    }
    swapList(head);
    printList(head);
}
