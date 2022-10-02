// leetcode majority element
#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ans; int mx=INT_MIN;
        for(auto it: m){
           if(it.second>mx){
               ans=it.first;
               mx=it.second;
           }
            
        }
        return ans;
    }
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
    cout << majorityElement(nums) <<endl;
    
    return 0;
}