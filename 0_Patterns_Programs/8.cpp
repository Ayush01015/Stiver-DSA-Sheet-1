#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N\n";
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0; j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}