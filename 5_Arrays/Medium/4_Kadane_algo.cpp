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
    int sum = 0, temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp=0;
            for(int k=i;k<=j;k++){
                temp = temp + v[k];
            }
            if(sum<temp)
                sum=temp;
        }
    }

    cout<<"Sum: "<<temp<<endl;

    return 0;
}