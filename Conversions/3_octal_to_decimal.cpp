#include <iostream>
using namespace std;

int octalToDecimal(int n)
{
    int x=1, ans=0;
    while(n>0)
    {
        int lastDigit = n%10;
        ans += lastDigit*x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<octalToDecimal(n);

    return 0;
}