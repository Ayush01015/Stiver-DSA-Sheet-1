#include<bits/stdc++.h>
using namespace std;
int countInArray(int number,int a[]){
    int c = 0;
    for(int i=0;i<5;i++){
        if(a[i]==number)
            c++;
    }
    return c;
   /*
    O(n) time complexity.
    And for all elments it will be O(5*n) where 5 is number of elements.
    And if you have 1e6(1000000) elements then it will take O(1e6 * n).
    And its not a effective of efficient Way of doing Counting..
    Here we perform Hashing [PreStoring and fetching].
   */
}
int main()
{   
    cout<<"Enter number of Elements\n";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Elements\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    // cout<<countInArray(1,a);
    int hash[100000] = {0}; //(1e5)
    for(int i=0;i<n;i++)
        hash[a[i]]+=1;
    cout<<"Enter How many times you want to Count\n";
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<hash[n]<<endl;
    }
    return 0;

} 