//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string txt, string path) {
	    // code here
	    //cout << txt <<" " <<path;
	    int ans = 0;
	    unordered_map<char,int> mp;
	    for(int i =0;i<txt.length(); i++){
	        mp[txt[i]]++;
	    }
	    int count  = mp.size();
	    int k = txt.length();
	    int i,j = 0;
	    
	    while(j<path.length()){
	        mp[path[j]]--;
	        if(mp[path[j]]==0) count--;
	        if(j-i+1<k){
	            j++;
	        }
	        // window hit
	        else if(j-i+1==k){
	            //cout << count << endl;
	            if(count==0){
	                ans++;
	            }
	            
	            if(mp[path[i]]==0) count++;
	            mp[path[i]]++;
	            i++;
	            j++;
	        }
	    }
	    
	    // return ans;
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends