#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    const int N = 1e6;
    bool check[N];
    for(int i=0; i<N; i++)
        check[i] = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]] = 1;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(check[i]==0){
            ans = i;
            break;
        }
    }

    cout<<ans;

    // 0 -10 1 3 -20

    return 0;
}