/*
push elements in stack if its an even.
Sample input: A=[2, 6, 1, 3, 4], B=[2]
output: B=[2, 6, 4]
*/
#include<bits/stdc++.h>
using namespace std;

void evenElements(int a[], int b[], int m){
    //creating an empty stack
    stack<int> s;
    int c=0;
    //pushing all the even elements to stack
    //and counting the even elements
    for(int i=0; i<m; i++){
        if(a[i]%b[0]==0){
            s.push(a[i]);
            c++;
        }
    }
    //As the stack is, 4 6 2
    //Bringing the last element to first in the array
    int i=c-1;
    while(!s.empty() && i>=0){
        b[i]=s.top();
        s.pop();
        i--;
    }
    //printing the b array
    for(int i=0; i<c; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int m;
    cin>>m;
    int a[m], b[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    cin>>b[0];
    evenElements(a, b, m);
    return 0;
}
