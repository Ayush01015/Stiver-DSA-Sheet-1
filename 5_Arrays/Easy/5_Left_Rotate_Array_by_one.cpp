#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter value of N\n";
    int n;
    cin >> n;
    int a[n]; //arr[1,1,2,2,2,3,3]
    int t;
    cout << "Enter " << n << " values\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Your " << n << " values are: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout<<endl;
    t = a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
        a[n-1] = t;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
