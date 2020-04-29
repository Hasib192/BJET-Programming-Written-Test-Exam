//Input: 1->2->3
//Output: 3->2->1
//Swap only the first & last element, means swap 1 & 3

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void printList(Node *head){
    for(Node *tmp=head; tmp!=NULL; tmp=tmp->next){
        cout<<tmp->data<<" ";
    }
    cout<<endl;
}

Node *swapList(Node *head){
    //fetching the first node
    Node *firstNode=head;

    //fetching the last node
    Node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    Node *lastNode=tmp;

    //swapping
    swap(firstNode->data, lastNode->data);
    //Returning firstNode as head
    head = firstNode;
    return head;
}

int main(){
    int n, value;
    cin>>n;
    Node *newNode, *head, *tmp;
    //Input Linked List
    for(int i=1; i<=n; i++){
        cin>>value;
        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if(i==1){
            head = newNode;
            tmp = head;
        } else{
            tmp->next = newNode;
            tmp=tmp->next;
        }
    }
    //Print before swapping
    printList(head);
    //Swapping
    swapList(head);
    //Printing after swapping
    cout<<"After swapping: ";
    printList(head);
}
