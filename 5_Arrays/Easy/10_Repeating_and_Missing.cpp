#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v ={3,1,2,5,3};
    vector <int> hash;
    int A,B;
    int c=0;
    int max = *max_element(v.begin(),v.end());
    for(int i=1;i<=max;i++){
        if(v[i]!=i)
            A=i;
    }
    cout<<A;
    return 0;
}