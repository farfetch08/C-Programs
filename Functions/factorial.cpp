#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    while(n>0)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;

    cout<<fact(n);

    return 0;
}