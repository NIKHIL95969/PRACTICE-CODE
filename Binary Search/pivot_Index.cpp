#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
int preSum[N];

int pivotIndex(vector<int>& nums) {
    int index = -1;
    preSum[0] = nums[0];
    for(int i = 1; i<nums.size(); i++){
        preSum[i] = preSum[i-1]+nums[i];
    }
    // for(int i = 0; i<nums.size(); i++){
    //     cout << preSum[i] << " ";
    // }
    // cout << endl;
    for (int i = 1; i < nums.size(); i++)
    {
        if(preSum[i-1]==preSum[nums.size()-1]-preSum[i]){
            cout << preSum[i]<<" ";
            return i;
        }
    }

    return index;
}
int main(){

    vector<int> arr = {1,7,3,6,5,6};
    
    cout << "Pivot Index is "<< pivotIndex(arr)<<endl;

    return 0;
}