#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    while(n>0)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

int ncr(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n-r));
    return ncr;
}

int main()
{
    int n; 
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
            cout<<" ";
        for(int j=0; j<=i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}