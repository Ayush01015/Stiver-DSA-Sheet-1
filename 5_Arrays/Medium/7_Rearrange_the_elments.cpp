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
    vector <int> temp1;
    vector <int> temp2;
    for(int i=0;i<v.size();i++){
        if(v[i]>=0)
            temp1.push_back(v[i]);
        else
            temp2.push_back(v[i]);
    }
    vector <int> arr;
    for(int i=0;i<temp1.size()+temp2.size();i++){
        arr.push_back(temp1[i]);
        arr.push_back(temp2[i]);
        cout<<i<<" ";
    }
    cout<<"Arr Size: "<<arr.size()<<endl;
    for(int i=0;i<arr.size()/2;i++)
        cout<<arr[i]<<" ";
    return 0;
}