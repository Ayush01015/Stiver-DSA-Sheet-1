#include <bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    int a = 0;
    int rem = n % k;
    int pair = n / k;
    auto it = arr.begin();
    auto end = arr.end();
    for (int i = 0; i < pair; i++)
    {
        reverse(it + a, it + (a + k));
        a = a + k;
    }
    cout<<"-->"<<(a+k)<<endl;
    cout<<"-->"<<(a-k)<<endl;
    reverse(it+(a),end);
}
int main()
{
    vector <long long> v = {1,2,3,4,5,6,7,8};
    reverseInGroups(v,8,3);
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}