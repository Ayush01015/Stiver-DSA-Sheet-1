#include <bits/stdc++.h>
using namespace std;
int maxOnes(vector<vector<int> > v){
    int c;
    int len=0;
    int index=-1;
    for(int i=0;i<v.size();i++){
        c=0;
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
               c++;
            }
        }
        if(len<c){
            len=c;
            index = i;
        }
    }
    return index;
}

int main()
{
    int N,M;
    int x;
    cout<<"Enter N and M\n";
    cin>>N>>M;
    vector <vector<int> > v;
    for(int i=0;i<N;i++){
        vector <int> temp;
        for(int j=0;j<M;j++){
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<maxOnes(v)<<endl;
    return 0;
}
