#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0)
        return 0;
    else
       return (n + sum(n-1));
}
int main()
{   cout<<"Enter a number: ";
    int n;
    cin>>n;
    int s = sum(n);
    cout<<"Sum: "<<s<<endl;

    return 0;
}