#include <bits/stdc++.h>
using namespace std;
int longestSubArray(vector<int> v, int k)  //O(n^3)
{ 
    int  c = 0, sum;
    int len = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            sum = 0, len = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + v[k];
                len++; //calculationg length
            }
            if (sum == k)
            {
                if (c < len)
                    c = len; //finding maximum length
            }
        }
    }
    return c;
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
    cout << "Length: " << longestSubArray(v,10) << endl;

    return 0;
}

/*
Example 1:
Input:
arr = {7,1,6,0}, k = 7

Output: Length of the longest subarray with sum K is 3
Explanation:
 1 + 6 + 0 = 7, it is the longest subarray with sum 7 and length 3.

Example 2:
Input:
arr = {2,3,5,1,9}, k = 10
Output: Length of the longest subarray with sum K is 3
Explanation: 2 + 3 + 5 = 10, it is the longest subarray with sum 10 and length 3
*/
