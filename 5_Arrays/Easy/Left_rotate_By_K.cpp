#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
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
    rotate(v,3);
    cout<<"Elements After Rotating: ";
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}