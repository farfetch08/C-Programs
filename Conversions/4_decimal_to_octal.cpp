#include <iostream>
using namespace std;

int decimalToOctal(int n)
{
    int ans=0, x=1;
    while(x<=n)
        x*=8;
    x/=8;
    while(x>0)
    {
        int lastDigit = n/x;
        ans = ans * 10 + lastDigit;
        n -= lastDigit * x;
        x /= 8;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<decimalToOctal(n);

    return 0;
}