#include<bits/stdc++.h>
using namespace std;
int greatest(int a[],int n){

    int i,max = a[0];
    int maxIndex=0;
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main()
{
    int a[100],n;
    cout<<"Enter numbers\n";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxIndex = greatest(a,n);
    int secondLargest = a[0];
    for(int i=0;i<n;i++)
        if(secondLargest<a[i] && i!=maxIndex)
            secondLargest = a[i];

    cout<<"Second Largest: "<<secondLargest<<endl;
    return 0;
}  
