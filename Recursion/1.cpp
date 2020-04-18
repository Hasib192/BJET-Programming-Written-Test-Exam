//Find minimum array element using recursion
//Input : A = {1, 4, 3, -5, -4, 8, 6};
//Output : -5

//https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

#include <iostream>
using namespace std;

// function to print Minimum element using recursion
int findMinRec(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}

int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  findMinRec(A, n);
    return 0;
}
