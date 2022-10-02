

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int it:nums1){
            //int i = (*it);
            if((it) == 0 ){
                nums1.erase(it);
            }
        }
        for(int i=nums1.size()-1; i>=0; i--){
            if(nums1[i]==0){
                nums1.pop_back();
            }
        }
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(), nums1.end());
    
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
    sort(nums.end(), nums.begin());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] <<" ";
    }
    
    
    return 0;
}