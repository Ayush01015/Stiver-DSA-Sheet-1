#include<bits/stdc++.h>
using namespace std;
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= -1;

    vector <int> v;
    max = *max_element(arr,arr+sizeOfArray);
    v.push_back(max);
    for(int i=0;i<sizeOfArray;i++){
        if(max2<arr[i]&&arr[i]!=max)
            max2=arr[i];
    }
    v.push_back(max2);
    return v;
}

int main()
{
    int a[] = {65,65};
    vector <int> c;
    c=largestAndSecondLargest(1,a);
    for(auto it: c){
        cout<<it<<" ";
    }   
    cout<<endl;
    return 0;
}

