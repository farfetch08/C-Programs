#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s=0, e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<"Enter a key to search: ";
    int key;
    cin>>key;

    cout<<binarySearch(arr, n, key);


    return 0;
}