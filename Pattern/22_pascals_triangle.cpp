// Method-1
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int coef=1;

//     for(int i=0; i<n; i++)
//     {
//         for(int j=1; j<=n-i; j++)
//             cout<<" ";
//         for(int j=0; j<=i; j++)
//         {
//             if(j==0 || i==0){
//                 coef = 1;
//             }
//             else{
//                 coef = coef * (i-j+1)/j;
//             }
//             cout<<coef<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// Method-2
#include <iostream>
using namespace std;

int fact(int n)
{   int result = 1;
    while(n>0)
    {
        result *= n;
        n--;
    }
    return result;
}


int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            int result = fact(i) / ( fact(j) * fact(i-j) );
            cout<<result<<" ";
        }
        cout<<endl;
    }

    return 0;
}