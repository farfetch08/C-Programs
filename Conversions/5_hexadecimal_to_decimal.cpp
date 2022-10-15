#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int ans=0, x=1, size;
    size = n.size();
    
    for(int i=size-1; i>=0; i--)
    {
        if(n[i]>= '0' && n[i]<='9')
        {
            ans += (n[i]-'0') * (x);
        }
        else if(n[i]>='A' || n[i]<='F')
        {
            ans += (n[i] - 'A' + 10) * x;
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    string n;
    cin>>n;

    // 1cf = 1*16^2 + 12*16^1 + 15*16^0

    cout<<hexadecimalToDecimal(n);

    return 0;
}