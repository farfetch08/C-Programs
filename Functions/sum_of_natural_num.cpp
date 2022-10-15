#include <iostream>
using namespace std;

int sumOfNaturals(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n;
    cin>>n;

    cout<<sumOfNaturals(n);

    return 0;
}