#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter value of N\n";
    int n;
    cin >> n;
    int a[n]; 
    int t = 0;
    int hash[100000]={0};
    cout << "Enter " << n << " values\n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
        hash[a[i]]+=1;
    }
    cout << "Your " << n << " values are: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        int B=-1;
    int max = *max_element(a,a+n);
    for(int i=1;i<=max;i++){
        if(hash[i]==0){
            B = i;
            // break;
        }
    }
    cout<<"\nResult: "<<B<<endl;

    
    return 0;
}
