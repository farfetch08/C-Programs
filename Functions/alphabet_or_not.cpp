#include <iostream>
using namespace std;

bool isAlpha(char c)
{
    int ascii = c;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122))
        return true;
    else
        return false;
}

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if(isAlpha(c))
        cout<<c<<" is an alphabet.";
    else
        cout<<c<<" is not an alphabet.";

    return 0;
}