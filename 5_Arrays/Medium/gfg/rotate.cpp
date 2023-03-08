#include<bits/stdc++.h>
using namespace std;
// void rotateArr(int arr[], int d, int n){
//     int temp;
//         for(int i=0;i<d;i++){
//             temp=arr[0];
//             for(int j=1;j<n;j++){
//                 arr[(j-1)%n]=arr[j];
//             }
//             arr[n-1]=temp;
//         }
// }
void rotateArr(int arr[], int d, int n){
    vector <int> temp(n);
    for(int i=0;i<d;i++)
        temp[i]=arr[i];
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    int a[] = {2,4,6,8,10};
    rotateArr(a,2,5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

