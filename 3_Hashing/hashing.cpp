#include<bits/stdc++.h>
using namespace std;
int countInArray(int number,int a[]){
    int c = 0;
    for(int i=0;i<5;i++){
        if(a[i]==number)
            c++;
    }
    return c;
   /*
    O(n) time complexity.
    And for all elments it will be O(5*n) where 5 is number of elements.
    And if you have 1e6(1000000) elements then it will take O(1e6 * n).
    And its not a effective of efficient Way of doing Counting..
    Here we perform Hashing [PreStoring and fetching].
   */
}
int main()
{
    int a[] = {1,2,1,3,2,};
    cout<<countInArray(1,a);
    return 0;
}