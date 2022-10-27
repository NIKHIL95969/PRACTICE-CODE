#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums, output, index+1, ans);
    // include
    int element =  nums[index];
    output.push_back(element);
    solve(nums, output,index+1, ans);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main(){
    vector<int> nums =  {1,2,3,4};
    vector<vector<int>> ans = subsets(nums);
    for (int i = 0; i <ans.size() ; i++)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] <<" ";
        }
        cout << "} " << " ";
    }
    
    return 0;
} 