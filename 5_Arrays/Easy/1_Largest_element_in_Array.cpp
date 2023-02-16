#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"Enter numbers\n";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    cout<<"Maximum is: "<<max;

    return 0;
}   