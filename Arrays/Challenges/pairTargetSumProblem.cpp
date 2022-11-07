#include <iostream>
using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int st=0, en=n-1;
    
    while(st<en){
        if(arr[st]+arr[en] == k){
            cout<<st<<" "<<en;
            return 0;
        }
        else if(arr[st]+arr[en] > k){
            en--;
        }
        else{
            st++;
        }

    }
    // 8 31
    // 2 4 7 11 14 16 20 21

    return 0;
}