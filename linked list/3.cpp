/*
    Reverse the linked List.
    Input: a->b->c->d->e->f
    Output: a->b->f->e->d->c
*/

//Supporting Code: https://www.geeksforgeeks.org/reverse-sublist-linked-list/

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    char data;
    Node *next;
};

// function used to reverse a linked list
Node *reverseList(Node *head){

    // Initialize current, previous and next pointers
    Node *nextNode=head, *currentNode=head, *prevNode=NULL;
    while(nextNode != NULL){
        // Store next
        nextNode = nextNode->next;
        // Reverse current node's pointer
        currentNode->next = prevNode;
        // Move pointers one position ahead.
        prevNode = currentNode;
        currentNode = nextNode;
    }
    //Set new head
    head = prevNode;

    return head;
}

// function used to reverse a linked list from position m to n which uses reverse function
Node *reverseBetween(Node *head, int m, int n){
    Node *currentNode = head;
    int i=1;

    // revStart and revEnd is start and end respectively
    // of the portion of the linked list which
    // need to be reversed. revStart_prev is previous
    // of starting position and revEnd_next is next
    // of end of list to be reversed.
    Node *revStart=NULL, *revEnd=NULL, *revStart_prev=NULL, *revEnd_next=NULL;


    // Find values of above pointers.
    while(currentNode!=NULL && i<=n){
        if(i<m){
            revStart_prev=currentNode;
        }
        if(i==m){
            revStart=currentNode;
        }
        if(i==n){
            revEnd=currentNode;
            revEnd_next=revEnd->next;
        }
        currentNode=currentNode->next;
        i++;
    }
    revEnd->next=NULL;

    // Reverse linked list starting with revStart.
    revEnd=reverseList(revStart);

    // If starting position was not head
    if(revStart_prev){
        revStart_prev->next=revEnd;
    } else{    // If starting position was not head
        head=revEnd;
    }
    
    revStart->next=revEnd_next;

    return head;
}

void printList(Node *head){
    for(Node *tmp=head; tmp!=NULL; tmp=tmp->next){
        cout<<tmp->data<<" ";
    }
    cout<<endl;
}
int main(){
    int n; char data;
    cin>>n;
    Node *head, *tmp;
    for(int i=1; i<=n; i++){
        cin>>data;
        Node *newNode = new Node();
        newNode->data=data;
        newNode->next=NULL;
        if(i==1){
            head = newNode;
            tmp = head;
        } else {
            tmp->next = newNode;
            tmp = tmp->next;
        }
    }
    int x, y;
    cout<<"Starting & Ending point to reverse: ";
    cin>>x>>y;
    //Reverse sublist
    head = reverseBetween(head, x, y);
    printList(head);
}
