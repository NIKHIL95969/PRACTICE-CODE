class Solution {
public:
    bool isPrime(int n){
        if (n <= 1)
            return false;
    
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
    
        return true;
    }

    int distinctPrimeFactors(vector<int>& nums) {
        long long int product = nums[0];
        for(int i=1; i<nums.size(); i++){
            product *= nums[i];
        }
        
        unordered_map<int,int> factors;
        int i = 2;
        while(product!=1){
            if(product%i==0){
                // cout << i <<" ";
                factors[i]++;
                product = product/i;
            }else i++;
        }
        
        int cnt = 0;
        for(auto it = factors.begin(); it!=factors.end(); ++it){
            int num = ((*it).first); 
            // cout << (*it).first << " ";
            if(isPrime(num)){
                cnt++;
            }
        }

        return cnt;
    }
};

// overflow int for larger val;