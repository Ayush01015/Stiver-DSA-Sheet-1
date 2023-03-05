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
    // int N = n/2; //using hashing
    // int B=-1;
    // cout << endl;
    // for(int i=0;i<n;i++){
    //     if(hash[i]>(N/2))
    //         B = i;
    // }
    // cout<<"Result: "<<B<<endl;


    //Moore’s Voting Algorithm
    int c = 0; //count
    int cand = 0; //candidate
    for(int num: v){
        if(c==0)
            cand=num;
        if(num==cand)
            c++;
        else
            c--;
    }

    cout<<"\nResult: "<<cand<<endl;
    return 0;
}

// Input Format:  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}
// Result: 4
