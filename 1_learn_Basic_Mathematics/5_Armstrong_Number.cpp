#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a number\n";
    int n,rem=0,arm=0;
    cin>>n;
    int t = n;
    while(n){
        rem=n%10;
        arm = arm +(rem*rem*rem);
        n=n/10;
    }
    if(t==arm)
        cout<<"Armstrong Number\n";
    else
        cout<<"Not a Armstrong Number\n";
    return 0;
}