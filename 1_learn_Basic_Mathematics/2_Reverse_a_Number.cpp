#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a number\n";
    int n,rev=0;
    cin>>n;
    while(n){
        rev = rev * 10;
        rev= rev + n%10;
        n=n/10;
    }
    cout<<"Reverse : "<<rev;
    return 0;
}