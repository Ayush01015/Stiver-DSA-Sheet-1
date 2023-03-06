#include <bits/stdc++.h>
using namespace std;
// int maxIndexDiff(int a[], int N)
// {
//     int diff = 0;
//     int x_diff = 0;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = N-1; j > i; j--)
//         {
//             if (a[i] <=  a[j])
//             {
//                 x_diff = j - i;
//                 break;
//             }
//         }
//         if (diff < x_diff)
//             diff = x_diff;
//     }
//     return diff;
// }
int maxIndexDiff(int a[], int N)
{
    int diff = 0;
    int x_diff = 0;
    int i=0,j=N-1;
    while(j>i){
        if(a[i]<a[j]){
            x_diff = j-i;
        }
        if(diff<x_diff)
            diff=x_diff;
        j--;
        i++;
    }
    return diff;
}
int main()
{
    // int a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    // int a[] = {1,10};
    int a[] = {65 ,6 ,74 ,94 ,56 ,89 ,9 ,63 ,75 ,25 ,34 ,68 ,93 ,48 ,16};
    cout << maxIndexDiff(a, 15);
    return 0;
}
