#include <bits/stdc++.h>
using namespace std;
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
        hash[v[i]]+=1;

    }
    cout << "Elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }   
    cout << endl;
    int N = n/2;
    for(int i=0;i<1;i++){
        cout<<hash[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(hash[i]>N)
            cout<<"Result: "<<i<<endl;
    }
    return 0;
}
// Input Format:  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}
// Result: 4
