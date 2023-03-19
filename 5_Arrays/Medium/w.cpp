#include <bits/stdc++.h>
using namespace std;

int equilibrium(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int rE = 0, lE = 0;
        for(int j=0;j<i;j++){
            rE=rE+v[j];
        }
        for(int k=i+1;k<v.size();k++)
            lE=lE+v[k];
        if(lE==rE)
            return true;
    }
    return false;
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
    cout<<"res: "<<equilibrium(v);
    return 0;
}


