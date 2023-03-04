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

    // vector <int> temp;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<n;j++){
    //         if(v[j]==i)
    //             temp.push_back(i);
    //     }
    // }

    // for (auto it : temp)
    // {
    //     cout << it << " ";
    // }

    //By Algorithm(DNFA)

    int low=0,mid=0,high=v.size()-1; 
    while(mid<=high){  //O(n)
        switch(v[mid]){
            case 0: 
                swap(v[low++],v[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(v[mid],v[high--]);
                break;
        }
    }
    cout << "Sorted Elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

/*
Dutch National Flag Algorithm O(N)

{0...low-1}   --> 0
{high+1...n}  --> 2
{low...mid-1} --> 1

case 0:
    swap(v[low++],vmid++])
case 1:
    mid++;
case 2:
    swap(v[mid],v[high--])

*/