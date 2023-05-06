#include<bits/stdc++.h>

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {

        priority_queue<int, vector<int>, greater<int> > g(
        arr, arr + r+1);
        int i = 1;
       
        while (!g.empty() && i<k) {
            g.pop();
            i++;
        }
        
        return g.top();
    }
};
