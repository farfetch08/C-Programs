#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    const int N = 1e5;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout<<-1;
    }
    else{
        cout<<minidx;
    }


    // 1 5 3 4 3 5 6

    return 0;
}