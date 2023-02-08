#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a number\n";
    int n,i=1;
    cin>>n;
    int t = n;
    while(n){ 
        if(t%i==0)
            cout<<i<<" ";
        i++;
        n--;
    }
    return 0;
}