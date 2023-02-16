#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter value of N\n";
    int n;
    cin >> n;
    int a[n];
    int t = 0;
    cout << "Enter " << n << " values\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Your " << n << " values are: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    for (int i = 0; i < n - 1; i++)
    {
        if (!(a[i] < a[i + 1]))
        {
            t++;
        }
    }
    if (t == 0)
        cout << "\nArray is sorted";
    else
        cout << "\nArray is not sorted";
    return 0;
}
