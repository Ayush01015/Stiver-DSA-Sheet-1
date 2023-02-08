#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a number\n";
    int t,n,rev=0;
    cin>>t;
    n=t;
    while(n){
        rev = rev * 10;
        rev= rev + n%10;
        n=n/10;
    }
    if(t==rev)
        cout<<"Palindrome\n";
    else    
        cout<<"Not a Palindrome\n";
    return 0;
}