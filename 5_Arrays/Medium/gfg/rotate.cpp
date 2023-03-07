#include<bits/stdc++.h>
using namespace std;
void rotateArr(int arr[], int d, int n){
    int temp;
        for(int i=0;i<d;i++){
            temp=arr[0];
            for(int j=1;j<n;j++){
                arr[(j-1)%n]=arr[j];
            }
            arr[n-1]=temp;
        }
}

int main()
{
    int a[] = {1,2,3,4,5};
    rotateArr(a,4,5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

