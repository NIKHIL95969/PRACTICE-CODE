// leetcode majority element
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       int a;
       cin >> a;
       nums.push_back(a);
    }
    sort(nums.end(), nums.begin());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] <<" ";
    }
    
    
    return 0;
}