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
    int max = *max_element(v.begin(),v.end());
    int hash[100000]={-1};
    int A,B;
    for(int i=0;i<n;i++){
        hash[v[i]]+=1; //hashing
    }
    for(int j=0;j<n;j++){
        if(hash[j]==2)
            A = j;  //count
    }
    for(int k=1;k<=max+1;k++){
        if(hash[k]==0){ //finding which element occurence in zero
            B=k;
            break;
        }
    }
    cout<<"Result: "<<"{"<<A<<","<<B<<"}"<<endl;

    return 0;
}
/*
Input Format:  array[] = {3,1,2,5,3}

Result: {3,4)

Explanation: A = 3 , B = 4 
Since 3 is appearing twice and 4 is missing
*/