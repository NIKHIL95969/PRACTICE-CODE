#include<bits/stdc++.h>
using namespace std;

int l_subarr(string arr, int k){

    int ans = 0;
    int i=0 ,j=0;
    unordered_map<char,int> mp;
    
    while (j<arr.size())
    {
        mp[arr[j]]++;
        if (mp.size()<k)
        {
            j++;
        }
        else if(mp.size()==k){
            int mx = j-i+1;
            ans = max(ans,mx);
            j++;
        }
        else if (mp.size()>k)
        {
            while(mp.size()>k){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            j++;
        }  
    }
    
    return ans;
}

int main(){
    string arr= "gcdeaabad";
    cout << " Output " << l_subarr(arr,3)<< endl;
    return 0;
}