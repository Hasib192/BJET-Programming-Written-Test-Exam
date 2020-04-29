//linked list swap first and second node
//Input: 1->2->3->4
//Output: 2->1->3->4

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

Node *swapList(Node *head){
    Node *firstNode, *secondNode;
    //set the first node
    firstNode=head;
    //set the second node
    secondNode=head->next;
    //swapping
    swap(firstNode->data, secondNode->data);

    head = firstNode;
    return head;
}

void printList(Node *head){
    for(Node *tmp=head; tmp!=NULL; tmp=tmp->next){
        cout<<tmp->data<<" ";
    }
    cout<<endl;
}

int main(){
    int n, value;
    cin>>n;
    Node *newNode, *tmp, *head;
    //Input linked list
    for(int i=1;i<=n; i++){
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
