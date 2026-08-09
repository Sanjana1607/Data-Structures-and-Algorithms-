/*
INSTERTION SORT
Time Complexity : O(n^2)
Approach:
-Pick and elemnt and compare it with each other element
*/
#include <iostream>
using namespace std;

void InsertionSort(int *A, int n) {
    for (int i = 1; i < n ; i++) {
        int curr =A[i];
        int prev = i-1;

        while(prev>=0 && A[prev]>curr){
            A[prev+1]=A[prev];
            prev--;
        }
        A[prev+1]= curr;
    }
}

int main() {
    int A[] = {3, 2, 5, 7, 1, 8, 4, 19};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Unsorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    InsertionSort(A, n);

    cout << "\nSorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    return 0;
}