#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A ={3,2,5,7,1,8,4,19};
    int n = A.size();
    cout << "Unsorted Array" <<endl;
    for(int vals : A){
        cout<< vals << ", " ;
    }
    for(int i = 0; i< n-1; i++){
        for(int j = 0 ; j < n - 1- i ; j++){
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }
    cout << "\nSorted Array" <<endl;
    for(int vals : A){
        cout<< vals << " , " ;
    }
    return 0;
}