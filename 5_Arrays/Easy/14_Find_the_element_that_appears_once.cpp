#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int B = -1, hash[100000];
    for (int i = 0; i < nums.size(); i++)
        hash[nums[i]] += 1;
    int max = *max_element(nums.begin(), nums.end());
    for (int i = 0; i <= max; i++)
        if (hash[i] == 1)
        {
            B = i;
            break;
        }
    return B;
}
int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    vector<int> v;
    int hash[100000];
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
    // for (int i = 0; i < n; i++)
    // {
    //     hash[v[i]] += 1;
    // }
    // int max = *max_element(v.begin(), v.end());
    // int B = -1;
    // cout << "Max" << max << endl;
    // for (int i = 0; i <= max; i++)
    //     cout << hash[i] << " ";
    // cout << endl;
    // for (int j = 1; j <= max; j++)
    // {
    //     if (hash[j] == 1)
    //     {
    //         B = j;
    //         break;
    //     }
    // }
    // cout << "Result: " << B << endl;
    cout<<"Result: "<<singleNumber(v);
    return 0;
}
/*
Example 1:

Input:
N = 5
A = {1, 1, 2, 5, 5}
Output: 2
Explanation:
Since 2 occurs once, while
other numbers occur twice,
2 is the answer.
Example 2:

Input:
N = 7
A = {2, 2, 5, 5, 20, 30, 30}
Output: 20
Explanation:
Since 20 occurs once, while
other numbers occur twice,
20 is the answer.
*/
