#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int mid, vector<int> &arr, int c){

    int cows = 1;
    int stall = arr[0];

    for(int i=1;i<arr.size();i++){

        if(arr[i]-stall>=mid){

            cows++;
            stall=arr[i];

        }

        if(cows==c)
            return true;
    }

    return false;
}

int getDistance(vector<int> &arr,int c){

    sort(arr.begin(),arr.end());

    int st=1;
    int end=arr.back()-arr.front();
    int ans=-1;

    while(st<=end){

        int mid=st+(end-st)/2;

        if(isPossible(mid,arr,c)){

            ans=mid;
            st=mid+1;

        }
        else{

            end=mid-1;

        }
    }

    return ans;
}

int main(){

    vector<int> arr={1,2,4,8,9};

    int c=3;

    cout<<getDistance(arr,c);

}