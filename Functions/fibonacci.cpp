#include <iostream>
using namespace std;

void fib(int n)
{
    int t1=0, t2=1, next_term;
    while(n>0)
    {
        cout<<t1<<" ";
        next_term = t1+t2;
        t1 = t2;
        t2 = next_term;
        n--;
    }
    return;
}

int main()
{   
    int n;
    cin>>n;

    fib(n);

    return 0;
}