#include <bits/stdc++.h>
using namespace std;
 
// Prints sums of all subsets of arr[l..r]
void subsetSums(int arr[], int l, int r, int sum = 0)
{
    // Print current subset
    //cout << sum << " ,";
    if (l > r) {
        cout << sum << " ";
        return;
    }
 
    // Subset including arr[l]
    subsetSums(arr, l + 1, r, sum + arr[l]);
 
    // Subset excluding arr[l]
    subsetSums(arr, l + 1, r, sum);
    //cout << "d";
}
 
// Driver code
int main()
{
    int arr[] = { 5, 4, 3,3,8,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    subsetSums(arr, 0, n - 1);
    return 0;
}