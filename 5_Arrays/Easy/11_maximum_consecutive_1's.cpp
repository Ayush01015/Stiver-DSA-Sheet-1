#include <bits/stdc++.h>
using namespace std;
int maxOnesInSubArray(vector<int> v)  //O(n^3)
{ 
    int  c = 0;
    int len;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            len = 0;
            for (int k = i; k <= j; k++)
            {
                if(v[i]==1)
                   len++;
            }
            if (c < len)
                c = len; //finding maximum length
                cout<<"C: "<<c<<endl;
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
    cout << "Length: " << maxOnesInSubArray(v) << endl;

    return 0;
}
