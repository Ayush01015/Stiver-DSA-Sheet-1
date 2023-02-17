#include <bits/stdc++.h>
using namespace std;
int search(vector<int> v,int data){
    for(int i=0;i<v.size();i++)
        if(v[i]==data)
            return i;
    return -1;
}
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
    cout<<"Index: "<<search(v,5); //-1 not present
    
    
    return 0;
}