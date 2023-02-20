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
    int c,sum,k = 7;
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0,c=0;
            for(int k=i;k<=j;k++){
                sum = sum + v[k];
                c++;
            }
        }
        if(sum==k)
        break;
    }
    cout<<"Length: "<<c<<endl;

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
