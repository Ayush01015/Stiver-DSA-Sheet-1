#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {4,0,2,1,3};
    vector <int> temp(n);
    for(int i=0;i<n;i++)
        temp[i]=arr[arr[i]];
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}