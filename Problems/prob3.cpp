#include<bits/stdc++.h>
using namespace std;

// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int it:nums1){
//             //int i = (*it);
//             if((it) == 0 ){
//                 nums1.erase(it);
//             }
//         }
//         for(int i=nums1.size()-1; i>=0; i--){
//             if(nums1[i]==0){
//                 nums1.pop_back();
//             }
//         }
//         for(int i=0; i<n; i++){
//             nums1.push_back(nums2[i]);
//         }
        
//         sort(nums1.begin(), nums1.end());
    
// }

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
    //sort(nums.end(), nums.begin());
    //vector<int>::iterator it;
   vector<int>::iterator it;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
        it = nums.begin()+i;
        if (*it == 0)
        {
            nums.erase(it);
            i--;
        }
        
    }
    
    // for (it=nums.begin(); it!=nums.end()-2; it++)
    // {
        
    // }
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] <<" ";
    }
    
    
    return 0;
}