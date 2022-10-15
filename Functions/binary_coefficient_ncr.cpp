#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    while(n>0)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

int main()
{
    int n, r;
    cin>>n>>r;

    int ncr = fact(n) / (fact(r) * fact(n-r));

    cout<<ncr;

    return 0;
}