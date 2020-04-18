//Input: 1->2->3
//Output: 3->2->1
//Swap only the first & last element

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
void printList(Node *head){
    Node *s=head;
    while(s!=NULL){
        cout<<s->data<<" ";
        s=s->next;
    }
}
Node *swapList(Node *head){
    Node *firstNode=head;
    Node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    Node *lastNode=tmp;
    swap(firstNode->data, lastNode->data);
    head = firstNode;
    return head;
}
int main(){
    int n, value;
    cin>>n;
    Node *newNode, *head, *tmp;
    for(int i=0; i<n; i++){
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
    printList(head);
    swapList(head);
    cout<<endl;
    cout<<"After swapping: ";
    printList(head);
}
