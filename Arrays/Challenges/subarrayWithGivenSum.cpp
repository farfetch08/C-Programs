#include <iostream>
using namespace std;

int main(){

    int n, s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int i=0, j=0, sum=0;

    while(j<n && sum + arr[j] <= s){
        sum += arr[j];        
        j++;
    }

    if(sum==s){
        cout<<i<<" "<<j-1;
        return 0;
    }

    while(j<n){
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }
        if(sum==s){
            cout<<i<<" "<<j;
            break;
        }
        j++;
    }

    // N = 5, S = 12
    // A[] = {1,2,3,7,5}


    return 0;
}