#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int c[],int m,int n){
    int i,j,k;
    i=j=k=0;
    while(i<m&&j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    // cout<<i<<j<<k<<endl;
    while(i<m){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<n){
        c[k] = b[j];
        j++;
        k++;
    }
}
int main()
{
    int j,t;
    int a[] = {7,9,18,19,22};
    int b[] = {1,6,9,11,67,68,69,90};
    int c[100];
    merge(a,b,c,5,8);
    cout<<"Printing Array\n";
    for(int i = 0; i <= (12) ; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}