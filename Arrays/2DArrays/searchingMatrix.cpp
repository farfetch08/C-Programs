#include <iostream>
using namespace std;

int main(){

    int n, m, k;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;
    cout<<"Enter key: ";
    cin>>k;

    int matrix[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }


    int flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == k){
                cout<<"Indexes are: "<<i<<", "<<j<<endl;
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout<<"Element "<<k<<" is found.";
    }
    else{
        cout<<"Element is "<<k<<" not found.";
    }

    return 0;
}