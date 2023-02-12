#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t;
    int a[] = {7,11,9,2,17,4};
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"Printing Array\n";
    for(int i = 0; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}