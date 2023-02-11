#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Ayush Shrivastav";
    int Hash[256] = {0};
    for(int i=0;i<s.length();i++){
        Hash[s[i]]+=1;
    }
    cout<<"Enter the number of time you want to search\n";
    int q;
    cin>>q;
    char ch;
    while(q--){
        cin>>ch;
        // int index = ch - 'a';
        int index = ch;
        cout<<ch<<"-->"<<Hash[index]<<endl;
    }
    return 0;
}