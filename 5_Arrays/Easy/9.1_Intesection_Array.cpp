#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[] = {1,2,3,3,4,5,6,69};
    int a2[] = {3,5,69};
    int m = 8 , n = 3;
    vector <int> temp;
    int hash[100000]={0};
    for(int i=0;i<m;i++){
        temp.push_back(a1[i]);
        hash[a1[i]]+=1;
    }
    for(int i=0;i<n;i++){
        temp.push_back(a2[i]);
        hash[a2[i]]+=1;
    }
    int max = *max_element(temp.begin(),temp.end());
    vector<int> v;
    for(int i=0;i<=max;i++){
        if(hash[i]>1){
            v.push_back(i);
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}
