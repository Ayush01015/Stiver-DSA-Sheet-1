#include<bits/stdc++.h>
using namespace std;
void nam(string name,int n){
    if(n==0)
        return;
    else{
        cout<<name<<" ";
        nam(name,--n);
    }
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    nam("Ayush",10);
    return 0;
}