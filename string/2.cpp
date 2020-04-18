//Input two string. Find if the first string is in second string. output valid if found or output invalid if not find.
//Input: XYZ
//Output: ABCXYZ


//https://www.geeksforgeeks.org/given-two-strings-find-first-string-subsequence-second/
#include<bits/stdc++.h>
using namespace std;

void isSubSequence(char str1[], char str2[], int m, int n){
    int j=0;
    for(int i=0; i<n && j<m; i++){
        if(str1[j]==str2[i]){
            j++;
        }
    }
    if(j==m){
        cout<<"Valid"<<endl;
    } else{
        cout<<"Invalid"<<endl;
    }
}
int main(){
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int m = strlen(str1);
    int n = strlen(str2);
    isSubSequence(str1, str2, m, n);
    return 0;
}
