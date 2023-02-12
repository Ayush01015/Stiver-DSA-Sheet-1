#include<bits/stdc++.h>
using namespace std;

int main()
{

    //selection sort
    int t, j, arr[] = {8,0,7,1,3};
    for(int i=0;i<=3;i++){
        int min = i;
        for(j=i+1;j<=4;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
            t=arr[min];
            arr[min]=arr[i];
            arr[i]=t;
    }
    cout<<"Printing Array\n";
    for(int i = 0; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
