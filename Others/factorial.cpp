#include <iostream>
using namespace std;

int fact(int n)
{
    int result=1;
    while(n>0)
    {
        result *= n;
        n--;
    }
    return result;
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n);

    return 0;
}