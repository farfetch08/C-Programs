#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cout<<"Enter an element to search: ";
    cin>>k;

    int r=0, c=n-1;
    int flag = false;
    while(r<m && c>=0){
        if(arr[r][c]==k){
            flag = true;
            break;
        }
        else if(arr[r][c]>k){
            c--;
        }
        else{
            r++;
        }
    }

    if(flag){
        cout<<"Element found at index: "<<r<<", "<<c;
    }
    else{
        cout<<"Element not found!";
    }

// [1, 4, 7, 11, 15],
// [2, 5, 8, 12, 19],
// [3, 6, 9, 16, 22],
// [10, 13, 14, 17, 24],
// [18, 21, 23, 26, 30]


    return 0;
}