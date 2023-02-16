#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter number of element\n";
    int n;
    cin>>n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        cout<<"Enter number you wish to store\n";
        int s;
        cin>>s;
        m[s]++;
    }
    int maxF = INT_MAX;
    int minF = INT_MIN;
    int maxE = -1;
    int minE = -1;
    for(auto &it : m){
        if(it.second>maxF){
            maxE = it.first;
            maxF = it.second;
        }
        if(it.second<minF){
            minE = it.first;
            minF = it.second;
        }
    }
    cout<<"Maximum Frequency: "<<maxE<<"Minimum Frequency: "<<minE<<endl;
    return 0;
}
// Code for homework :
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//   int a[] = {1,2,1,2,3,4,3,1};
//   unordered_map < int, int > mpp;
//   for (int i = 0; i < 8; i++) {
//     mpp[a[i]]++;
//   }
//   int maxFreq = INT_MIN;
//   int minFreq = INT_MAX;
//   int maxEle = -1, minEle = -1;
//   for (auto & e: mpp) {
//     if (e.second > maxFreq) {
//       maxEle = e.first;
//       maxFreq = e.second;
//     }
//     if (e.second < minFreq) {
//       minEle = e.first;
//       minFreq = e.second;
//     }
//   }
//   cout << maxEle << " " << minEle;
// }