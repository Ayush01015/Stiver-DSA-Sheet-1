#include <bits/stdc++.h>
using namespace std;


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
    // Brute Force I O(n^3)
    int sum;
    int k = 10;
    vector <int> R;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum = sum + v[k];
            }
            if(sum==k){
                for(int m = i; m<=j; m++){
                    R.push_back(v[m]);
                }
            }

        }
    }
    for(auto it: R){
        cout<<it<<" ";
    }

    return 0;
}