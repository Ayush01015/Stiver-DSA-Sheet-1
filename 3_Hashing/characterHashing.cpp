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
    while(q--){
        char ch;
        cin>>ch;
        // int index = ch - 'a';
        cout<<ch<<"-->"<<Hash[ch]<<endl;
    }
    return 0;
}
