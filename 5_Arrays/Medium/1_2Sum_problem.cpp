#include <bits/stdc++.h>
using namespace std;
void twoSum(vector<int> v, int target)
{
    int a=-1, b=-1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + v[(i + 1) % v.size()] == target)
        {
            a = i;
            b = (i + 1) % v.size();
            break;
        }
    }
    cout << "[" << a << "," << b << "]" << endl;
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
    twoSum(v,6);

    return 0;
}