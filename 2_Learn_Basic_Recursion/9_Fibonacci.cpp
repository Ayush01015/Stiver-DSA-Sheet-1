#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    if(n==0){
        cout<<"0";
    }else if(n==1){
        cout<<"0"<<" 1"<<endl;
    }
    else{
        fibo(--n);
    }
    
}
int main()
{
    cout<<"Enter a Number\n";
    int n;
    cin>>n;
    fibo(n);
    return 0;
}