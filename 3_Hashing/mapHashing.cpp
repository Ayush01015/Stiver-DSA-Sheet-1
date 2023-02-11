#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter Number of elements\n";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    cout<<"Enter Search Number\n";
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<m[n]<<endl;
    }
    return 0;
}