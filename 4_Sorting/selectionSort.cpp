#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, arr[] = {8,0,7,1,3};
    //selection sort
    // int arr[i] = arr[0];
    for(int i=0;i<=4;i++){
        for(int j=i;j<=3;j++){
            if(arr[i]>arr[j+1]){
                // arr[j] = arr[i];
                t=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    cout<<"Printing Array\n";
    for(int i = 0; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
