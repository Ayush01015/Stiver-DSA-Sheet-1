#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {2,3,4,4,5};
    int m = 5 , n = 5;
    vector <int> temp;
    vector <int> hash;
    for(int i=0;i<m;i++){
        temp.push_back(a1[i]);
    }
    for(int i=0;i<n;i++){
        temp.push_back(a2[i]);
    }
    for(auto it: temp){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(temp.begin(),temp.end());
    for(auto it: temp){
        cout<<it<<" ";
    }
    vector<int>v;
    v.push_back(temp[0]);
    for(int i=1;i<temp.size();i++){
        if(temp[i]!=temp[i-1])
            v.push_back(temp[i]);
    }
    cout<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}