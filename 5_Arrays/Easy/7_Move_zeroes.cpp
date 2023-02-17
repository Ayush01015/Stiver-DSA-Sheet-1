#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    vector <int> v;
    cout<<"Enter "<<n<<" values"<<endl;
    int l;
    for(int i=0;i<n;i++){
        cin>>l;
        v.push_back(l);
    }
    cout<<"Elements are: ";
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
    vector <int> temp;
    int c = 0;
    for(int i=0;i<n;i++){
        if(v[i]!=0)
            temp.push_back(v[i]);
        else
            c++;
    }
    for(int j=(v.size()-c);j<v.size();j++){
        temp.push_back(0);
    }
    v=temp;
    for(auto it: v){
    cout<<it<<" ";
    }
    
    return 0;
}