#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter value of N\n";
    int n;
    cin >> n;
    int a[n]; //Array of size n
    int temp[n]; //temporary Array
    int t; 
    cout << "Enter " << n << " values\n"; //inputing Array
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Your " << n << " values are: \n"; //displaying input
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout<<endl;
    // #logic 1:
    // t = a[0]; //storing initial index in temp
    // for(int i=0;i<n-1;i++){
    //     a[i]=a[i+1]; //left shifting 
    // }
    //     a[n-1] = t; //finally copying temp at lastIndex.
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    // #logic 2:
    for(int i=0;i<n;i++)
        temp[(i+1)%n] = a[i]; 
    for (int i = 0; i < n; i++)
        a[i]=temp[i];
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
