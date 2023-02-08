#include<bits/stdc++.h>
using namespace std;
void f1(int n){
    if(n==0)
        return;
    else{
        f1(--n);
        cout<<n+1<<" ";
    }
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    f1(n);
    return 0;
}