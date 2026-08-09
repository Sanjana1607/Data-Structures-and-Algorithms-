/*
BUBBLE SORT
Time Complexity : O(n^2)
Approach:
-Let first two elements of array be a &b
-Compare both and swap if a>b
-After each outer iteration the largest value comes to the end

Optimization
-Even if the array is sorted the code still performs n62 operations
-therefore we insert a variable toSwap to keep in check of the unnecessary iterations
*/
#include <iostream>
using namespace std;

void BubbleSort(int *A, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool toSwap = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                toSwap = true;
            }
        }

        if (!toSwap) {
            return;
        }
    }
}

int main() {
    int A[] = {3, 2, 5, 7, 1, 8, 4, 19};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Unsorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    BubbleSort(A, n);

    cout << "\nSorted Array" << endl;

    for (int vals : A) {
        cout << vals << ", ";
    }

    return 0;
}