//input: A = [7, 1, 2, 3, 4, 5, 6]
//output: 20
//Find the maximum sum of the contiguous array
//7+1+2+3+4=17
//1+2+3+4+5=15
//2+3+4+5+6=20
//Maximum value is 20

#include<bits/stdc++.h>
using namespace std;

int sumArray(int A[], int n){
    int sum, max=INT_MIN;
    for(int i=0; i<=n-5; i++){
        sum=0;
        for(int j=i; j<i+5; j++){
            sum+=A[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
}
int main(){
    int A[]={7, 1, 2, 3, 4, 5, 6};
    
    int n = sizeof(A)/sizeof(A[0]);
    
    cout<<"Sum: "<<sumArray(A, n)<<endl;
}
