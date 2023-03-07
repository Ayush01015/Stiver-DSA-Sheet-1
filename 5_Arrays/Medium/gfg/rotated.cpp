#include<bits/stdc++.h>
using namespace std;
bool checkRotatedAndSorted(int arr[], int num){
    int b = -1,c = 0;
    for(int i=1;i<num;i++){
        if(arr[i-1]>arr[i])
            c++;
    }
    if(arr[num-1]>arr[0]){
        c++;

    }
    if(c<=1)
        return true;
    else
        return false;
}

int main()
{
    int a[] = {1,2,3};
    cout<<checkRotatedAndSorted(a,3); 
    return 0;
}

