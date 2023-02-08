#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter a number\n";
    cin>>n;
    while(n){
        n=n/10;
        c++;
    }
    cout<<"Digits are : "<<c<<endl;
    return 0;
}