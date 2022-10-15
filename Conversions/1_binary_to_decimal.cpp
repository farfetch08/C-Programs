#include <iostream>
#include <cmath>
using namespace std;

int btd(int n){
    int lastdigit, result=0, i=0;
    while(n>0){
        lastdigit = n%10;
        result += lastdigit * pow(2,i);
        i++;
        n/=10;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<btd(n);

    return 0;
}