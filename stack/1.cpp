/*
Dhoro kono browser e kichu webpage browse krla, segula hobe input, jdi back button e click koro then ager page ta back krbe

Take a string

Input:
google.com
facebook.com
back
twitter.com

Output:
google.com
facebook.com
google.com
twitter.com

Note: Dont use Array/list
*/
#include<bits/stdc++.h>
using namespace std;

void browserBack(string s, stack<string>& stk){
    while(getline(cin, s)){
        //if string is "back", top element will be popped 
        //and next element will show
        if(s=="back"){
            //If stack size is less than 2 mean 1, than can't go back
            //cause nothing is there.
            if(stk.size()>=2){
                stk.pop();
                cout<<stk.top()<<endl;
            } else {
                cout<<"Can't go back"<<endl;
            }
        } else { //If stack is not back push it to stack
            stk.push(s);
        }
    }
}

int main(){
    string s;
    stack<string> stk;
    browserBack(s, stk);
    return 0;
}
