#include <bits/stdc++.h>
using namespace std;
int maxOnesInSubArray(vector<int> v) 
{ 
    
    int res=0;
    for (int i = 0; i < v.size(); i++)
    {
       int c=0;
        for (int j = i; j < v.size(); j++)
        {
            if(v[j]==1)
                c++;
            else
                break;
        }
        res=max(c,res);
    }
    return res;
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
    cout << "Length: " << maxOnesInSubArray(v) << endl;

    return 0;
}
