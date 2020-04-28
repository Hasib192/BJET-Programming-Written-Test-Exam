/*
Count array elements. If found duplicate count as one.
Sample Input/Output:

1) A = [3, 2, 2, 1, 1]
output: 3
cause 1, 2, 3 are the only elements.
2) A = [1, 2, 3, 4, 4, 5]
output: 5
cause 1, 2, 3, 4, 5 are the only single elements, rest of are duplicates

Do this as a function.
*/

#include<bits/stdc++.h>
using namespace std;

int countElement(int arr[], int n){
    /*Input :   arr[] = {10, 20, 20, 10, 30, 10}
    Output : 3
    There are three distinct elements 10, 20 and 30.*/
    int res = 0;
    int i, j;
    // Pick all elements one by one
    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                res++;
                break;
            }
        }
    }
    //Total value subtract by duplicate value
    int c=n-res;
    
    return c;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int e = countElement(arr, n);
    cout<<e<<endl;
}
