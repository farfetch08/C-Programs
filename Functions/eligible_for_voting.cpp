#include <iostream>
using namespace std;

bool isEligible(int n)
{
    if(n>=18)
        return true;
    else
        return false;
}

int main()
{
    int age;
    cin>>age;

    if(isEligible(age))
        cout<<"Eligible";
    else
        cout<<"Not Eligible";

    return 0;
}