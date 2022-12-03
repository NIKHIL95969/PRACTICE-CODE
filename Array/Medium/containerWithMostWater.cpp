class Solution {
public:
    int maxArea(vector<int>& arr) {
        int ans = INT_MIN; 
        int i =0; int j = arr.size()-1;
        while(i<j){
            int mini = min(arr[i], arr[j]);
             int rs = mini*(j-i);
            ans = max(ans,rs);
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
 
        return ans;
    }
};