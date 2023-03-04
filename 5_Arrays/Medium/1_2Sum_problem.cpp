#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum2(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 res.emplace_back(i);
   			 res.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (res.size() == 2)
   		 break;
    }
    return res;
}
vector<int> twoSum(vector<int> &v,int target){
    vector <int> t;
    for(int i=0;i<v.size();i++){
        for(int k=i+1;k<v.size();k++){
            if(target-v[i]==v[k]){
                t.push_back(i);
                t.push_back(k);
                break;
            }
        }
    }
    return t;

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
    // twoSum(v,10);
    vector <int> c;
    c=twoSum(v,14);
    for(auto it:c){
        cout<<it<<" ";
    }


    return 0;
}