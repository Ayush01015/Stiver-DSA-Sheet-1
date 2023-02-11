#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ayush shrivastav from galgotias university";
    map <char,int> m;
    //pre-Compute
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    cout<<"Enter Search Number\n";
    int q;
    cin>>q;
    while(q--){
        cout<<"Enter Character to search\n";
        char ch;
        cin>>ch;
        //fetch
        cout<<ch<<"-->"<<m[ch]<<endl;
    }
    return 0;
}
 