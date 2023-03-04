#include <bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int> &v,int target){
//     vector <int> t;
//     for(int i=0;i<v.size();i++){
//         for(int k=i+1;k<v.size();k++){
//             if(target-v[i]==v[k]){
//                 t.push_back(i);
//                 t.push_back(k);
//                 break;
//             }
//         }
//     }
//     return t;
// }

vector <int> twoSum(vector<int> &v,int target){
    vector <int> ans;
    unordered_map<int,int> mpp;
    for(int i=0;i<v.size();i++){
        if(mpp.find(target-v[i])!=mpp.end()){
            ans.push_back(mpp[target-v[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[v[i]]=i;
    }
    return ans;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter " << n << " values" << endl;
    int l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        v.push_back(l);
    }
    cout << "Elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    vector <int> c;
    c=twoSum(v,9);
    if(c.size()==0)
        cout<<0;
    else
        for(auto it:c){
            cout<<it<<" ";
        }
    return 0;
}
