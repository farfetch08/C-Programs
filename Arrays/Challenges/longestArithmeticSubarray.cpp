#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int ans = 2;
    int curr = 2;
    int pd = arr[1] - arr[0];
    int j = 2;

    while(j<n){
        
        if(arr[j]-arr[j-1] == pd){
            curr++;
        }
        else{
            curr = 2;
            pd = arr[j]-arr[j-1];
        }
        ans = max(ans, curr);
        j++;

    }

    cout<<ans;

    return 0;
}