/*
SELECTION SORT
Time Complexity : O(n^2)
Approach:
-Divide arraya into Sorted and unsorted part
-Find the smallest element from the unsorted section and bring it into the sorted section

*/
#include <iostream>
using namespace std;

void SelectionSort(int *A, int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallestIdx = i;

        for (int j = i+1; j < n ; j++) {
            if (A[j] < A[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(A[i], A[smallestIdx]);
        }
    }


int main() {
    int A[] = {3, 2, 5, 7, 1, 8, 4, 19};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Unsorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    SelectionSort(A, n);

    cout << "\nSorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    return 0;
}