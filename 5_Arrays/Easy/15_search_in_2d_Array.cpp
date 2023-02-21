#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int> > v,int key){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==key){
               return true;
               break;
            }
        }
        cout<<endl;
    }
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
    cout<<endl;
    cout<<search(v,3); //0-->not found 1-->found
    return 0;
}
/*
Example 1:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 3

Output: true

Explanation: As the given integer(target) exists in the given 2D matrix, the function has returned true.
Example 2:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 13

Output: false

Explanation: As the given integer(target) does not exist in the given 2D matrix, the function has returned false.
*/
