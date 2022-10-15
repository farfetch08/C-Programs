#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, i;
    cin>>n;

    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"Non-prime"<<endl;
            break;
        }
    }

if(i>sqrt(n)){
    cout<<"Prime"<<endl;
}

    return 0;
}