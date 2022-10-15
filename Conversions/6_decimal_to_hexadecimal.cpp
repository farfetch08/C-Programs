#include <bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n)
{
    int x=1;
    string ans="";
    while(x<=n)
        x*=16;
    x/=16;
    while(x>0)
    {
        int lastDigit = n/x;
        if(lastDigit>=0 && lastDigit<=9)
        {
            ans += to_string(lastDigit);
        }
        else if(lastDigit>=10 && lastDigit<=15)
        {
            ans += toascii(lastDigit+55);
        }
        n -= x*lastDigit;
        x /= 16;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<decimalToHexadecimal(n);

    return 0;
}