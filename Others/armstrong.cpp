#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, lastdigit, sum=0, comp;
    cin>>n;

    comp = n;

    while(n>0)
    {
        lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n /= 10;
    }

    if(comp==sum)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

    return 0;
}