#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    if(n==1)
        return 1;
    else
       return (n * Fact(n-1));
}
int main()
{   cout<<"Enter a number: ";
    int n;
    cin>>n;
    int s = Fact(n);
    cout<<"Fact: "<<s<<endl;

    return 0;
}