#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter the value of N\n";
    cin>>n;
    for(int i=0;i<=n*2-1;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0; j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        if(c>=n){
            cout<<endl;
            int i=n-1;
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0; j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        i--;
        }
        c++;
        cout<<endl;
    }
    return 0;
}